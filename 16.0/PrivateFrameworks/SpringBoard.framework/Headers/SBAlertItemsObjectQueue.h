// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALERTITEMSOBJECTQUEUE_H
#define SBALERTITEMSOBJECTQUEUE_H

@class NSString, NSMutableOrderedSet;
@protocol BSDescriptionProviding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SBAlertItemsObjectQueue : NSObject <BSDescriptionProviding, NSFastEnumeration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *objects; // ivar: _objects
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(BOOL)hasObject;
-(BOOL)hasObjectOfClass:(Class)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)dequeueAllObjects;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)objectsOfClass:(Class)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)appendObject:(id)arg0 ;
-(void)prependObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif