// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVBEHAVIORSTORAGE_H
#define AVBEHAVIORSTORAGE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface AVBehaviorStorage : NSObject

@property (weak, nonatomic) id *AVKitOwner; // ivar: _AVKitOwner
@property (readonly, nonatomic) NSMapTable *behaviorsAndBehaviorContexts; // ivar: _behaviorsAndBehaviorContexts


-(id)behaviorContextOfClass:(Class)arg0 ;
-(id)behaviorOfClass:(Class)arg0 ;
-(id)behaviors;
-(id)initWithAVKitOwner:(id)arg0 ;
-(void)addBehavior:(id)arg0 ;
-(void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg0 forProtocol:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAllBehaviorContextsUsingBlock:(id)arg0 ;
-(void)enumerateAllBehaviorsConformingToProtocol:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateAllBehaviorsUsingBlock:(id)arg0 ;
-(void)removeBehavior:(id)arg0 ;


@end


#endif