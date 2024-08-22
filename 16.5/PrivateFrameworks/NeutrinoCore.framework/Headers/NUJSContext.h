// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUJSCONTEXT_H
#define NUJSCONTEXT_H

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSError, JSContext;

#import <Foundation/Foundation.h>


@interface NUJSContext : NSObject {
    NSHashTable *_collectedProxies;
    NSMutableArray *_stateStack;
    NSMutableDictionary *_functions;
}


@property (retain, nonatomic) NSError *error;
@property (retain) JSContext *jsContext; // ivar: _jsContext


+(BOOL)validateValuesAreNumbers:(id)arg0 error:(*id)arg1 ;
+(id)contextForContext:(id)arg0 ;
+(void)execute:(id)arg0 ;
-(id)currentState;
-(id)functionForKey:(id)arg0 ;
-(id)init;
-(void)addProxy:(id)arg0 ;
-(void)popState;
-(void)pushState:(id)arg0 ;
-(void)resetAllProxies;
-(void)setFunction:(id)arg0 forKey:(id)arg1 ;
-(void)setupBuiltInFunctions;


@end


#endif