// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTRIGGERANONYMOUSACTIONSETBUILDER_H
#define HFTRIGGERANONYMOUSACTIONSETBUILDER_H

@class HMTrigger;


#import "HFAbstractBaseActionSetBuilder.h"
#import "HFMutableSetDiff.h"

@interface HFTriggerAnonymousActionSetBuilder : HFAbstractBaseActionSetBuilder

@property (readonly, nonatomic) HFMutableSetDiff *actionBuilders;
@property (nonatomic) NSUInteger actionSetType; // ivar: _actionSetType
@property (retain, nonatomic) HMTrigger *containingTrigger; // ivar: _containingTrigger


-(BOOL)hasActions;
-(id)commitItem;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deleteActionSet;
-(id)getOrCreateActionSet;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(void)addAction:(id)arg0 actionSetType:(NSUInteger)arg1 ;
-(void)updateAction:(id)arg0 ;
-(void)updateActionBuildersDiff:(id)arg0 ;


@end


#endif