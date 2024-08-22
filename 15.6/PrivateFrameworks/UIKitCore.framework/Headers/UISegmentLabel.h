// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISEGMENTLABEL_H
#define UISEGMENTLABEL_H



#import "UILabel.h"

@interface UISegmentLabel : UILabel

@property (weak, nonatomic) UILabel *associatedLabel; // ivar: _associatedLabel


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_associatedScalingLabel;
-(id)_disabledFontColor;
-(id)_parentSegment;
-(id)init;


@end


#endif