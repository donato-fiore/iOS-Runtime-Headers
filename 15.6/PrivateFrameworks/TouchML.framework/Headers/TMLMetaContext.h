// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLMETACONTEXT_H
#define TMLMETACONTEXT_H

@class NSString, NSArray, NSDictionary, NSSet;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>

#import "TMLMetaObject.h"

@interface TMLMetaContext : NSObject <TMLModelSerialize>

 {
    NSString *_rootObjectIdentifier;
}


@property (readonly, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) NSDictionary *classes; // ivar: _classes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *exports; // ivar: _exports
@property (readonly, nonatomic) NSDictionary *functions; // ivar: _functions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *objects; // ivar: _objects
@property (readonly, nonatomic) NSDictionary *protocols; // ivar: _protocols
@property (readonly, nonatomic) NSSet *requires; // ivar: _requires
@property (readonly, nonatomic) TMLMetaObject *rootObject;
@property (readonly) Class superclass;


+(id)convertObject:(id)arg0 toClass:(id)arg1 ;
+(id)convertObject:(id)arg0 toProtocol:(id)arg1 ;
+(id)decode:(struct ProtobufCMessage *)arg0 ;
+(id)deserializeFromData:(id)arg0 ;
-(id)findParentForObjectWithIdentifier:(id)arg0 ;
-(id)init;
-(id)serializedData;
-(void)addClass:(id)arg0 ;
-(void)addExports:(id)arg0 ;
-(void)addFunction:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectAsClass:(id)arg0 ;
-(void)addObjectAsProtocol:(id)arg0 ;
-(void)addProtocol:(id)arg0 ;
-(void)addRequire:(id)arg0 ;
-(void)commit;
-(void)encode:(struct ProtobufCMessage *)arg0 ;
-(void)removeCategories;
-(void)removeClasses;
-(void)removeFunctions;


@end


#endif