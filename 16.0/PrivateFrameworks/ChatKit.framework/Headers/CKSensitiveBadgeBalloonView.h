// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSENSITIVEBADGEBALLOONVIEW_H
#define CKSENSITIVEBADGEBALLOONVIEW_H

@class UIView;


#import "CKImageBalloonView.h"

@interface CKSensitiveBadgeBalloonView : CKImageBalloonView

@property (retain, nonatomic) UIView *commSafetyBadgeView; // ivar: _commSafetyBadgeView


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif