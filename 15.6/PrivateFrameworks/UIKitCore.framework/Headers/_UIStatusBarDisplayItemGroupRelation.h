// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDISPLAYITEMGROUPRELATION_H
#define _UISTATUSBARDISPLAYITEMGROUPRELATION_H

@class UIStatusBarDisplayItemRelation, NSArray;



@interface _UIStatusBarDisplayItemGroupRelation : UIStatusBarDisplayItemRelation

@property (retain, nonatomic) NSArray *relations; // ivar: _relations
@property (nonatomic) BOOL requiresAll; // ivar: _requiresAll


-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(id)itemStates;
-(id)type;


@end


#endif