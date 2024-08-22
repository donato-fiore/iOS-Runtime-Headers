// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVISUALIDENTITYITEMEDITORSEGMENTEDCONTROL_H
#define CNVISUALIDENTITYITEMEDITORSEGMENTEDCONTROL_H

@class UISegmentedControl;



@interface CNVisualIdentityItemEditorSegmentedControl : UISegmentedControl



+(id)segmentedControlForItemType:(NSUInteger)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)selectStyleSegment;
-(void)selectTextSegment;
-(void)setStyleOnlyMode;
-(void)setStyleSegmentEnabled:(BOOL)arg0 ;
-(void)setTextAndStyleMode;
-(void)setTextSegmentEnabled:(BOOL)arg0 ;


@end


#endif