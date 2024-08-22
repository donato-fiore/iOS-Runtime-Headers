// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIDETAILLABELCOMPONENTVIEW_H
#define SIRIUIDETAILLABELCOMPONENTVIEW_H

@class UILabel;


#import "SiriUILabelComponentView.h"

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView

@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) UILabel *mainLabel; // ivar: _mainLabel


+(id)viewForComponent:(id)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)addSubviewsForComponentModel:(id)arg0 ;


@end


#endif