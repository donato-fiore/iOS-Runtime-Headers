// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLCONTEXT_H
#define TMLCONTEXT_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, JSContext, NSArray, NSException, JSValue, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "TMLMetaContext.h"

@interface TMLContext : NSObject {
    TMLMetaContext *_metaContext;
    NSMutableDictionary *_objects;
    NSMutableSet *_contextObjects;
    NSMutableSet *_weakObjectIdentifiers;
    NSMutableArray *_signalHandlers;
    JSContext *_jsContext;
    NSArray *_currentEvaluationBindings;
    NSException *_jsEvaluationException;
    JSValue *_apiObject;
    NSString *_apiObjectKey;
    BOOL _initialized;
    NSMutableSet *_requires;
    NSUInteger _options;
    BOOL _beingDisposed;
}


@property (readonly, nonatomic) NSDictionary *allObjects;
@property (readonly, nonatomic) NSObject *rootObject;


+(BOOL)loadClasses:(id)arg0 ;
+(BOOL)loadClasses:(id)arg0 path:(id)arg1 ;
+(BOOL)loadClassesFromPath:(id)arg0 ;
+(Class)createClassFromPath:(id)arg0 ;
+(id)cloneContext:(id)arg0 objects:(id)arg1 ;
+(id)currentContext;
+(id)loadMetaContextWithSource:(id)arg0 path:(id)arg1 options:(NSUInteger)arg2 ;
+(void)addGloballyRequiredModules:(id)arg0 ;
+(void)initialize;
+(void)initializeJSContext:(id)arg0 ;
+(void)printStatisticsWithInterval:(CGFloat)arg0 ;
-(BOOL)loadSource:(id)arg0 ;
-(BOOL)loadSource:(id)arg0 path:(id)arg1 ;
-(BOOL)loadSourceFromPath:(id)arg0 ;
-(BOOL)raiseException:(id)arg0 ;
-(BOOL)valid;
-(id)apiObject;
-(id)applyProperties:(id)arg0 inOrder:(id)arg1 toObject:(id)arg2 ;
-(id)callFunction:(id)arg0 arguments:(id)arg1 returnType:(NSUInteger)arg2 ;
-(id)createObjectFromMetaObject:(id)arg0 parent:(id)arg1 ;
-(id)didCreateObject:(id)arg0 ;
-(id)evaluateExpression:(id)arg0 ofType:(NSUInteger)arg1 withBindings:(id)arg2 ;
-(id)existingObjectWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)metaContext;
-(id)objectWithIdentifier:(id)arg0 ;
-(id)objectWithIdentifier:(id)arg0 unwrapWeak:(BOOL)arg1 ;
-(id)objectWithIdentifier:(id)arg0 unwrapWeak:(BOOL)arg1 createIfMissing:(BOOL)arg2 ;
-(id)objectWithIdentifierNoCreate:(id)arg0 ;
-(id)objectsOfType:(id)arg0 ;
-(id)processValue:(id)arg0 ofType:(NSUInteger)arg1 selfValue:(id)arg2 ;
-(void)addObject:(id)arg0 withIdentifier:(id)arg1 ;
-(void)addObjectReference:(id)arg0 ;
-(void)attachToAPIObject;
-(void)callFunction:(id)arg0 arguments:(id)arg1 ;
-(void)dealloc;
-(void)dispose;
-(void)disposeIfNecessary;
-(void)initializeJSContext;
-(void)initializeWithCloneContext:(id)arg0 ;
-(void)initizalizeContext;
-(void)makeWeakObjectWithIdentifier:(id)arg0 ;
-(void)raiseJSException:(id)arg0 ;
-(void)requireModule:(id)arg0 ;
-(void)resetException;
-(void)resetJSException;


@end


#endif