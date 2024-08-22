// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMVIDEOSTABILIZATIONBADGE_H
#define CAMVIDEOSTABILIZATIONBADGE_H

@class CEKBadgeTextView;



@interface CAMVideoStabilizationBadge : CEKBadgeTextView

@property (nonatomic) NSInteger videoStabilizationMode; // ivar: _videoStabilizationMode


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTextAndColors;


@end


#endif