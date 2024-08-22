// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEKWHEELSCRUBBERROUNDEDCORNEROVERLAYVIEW_H
#define CEKWHEELSCRUBBERROUNDEDCORNEROVERLAYVIEW_H

@class UICollectionReusableView, UIColor;



@interface CEKWheelScrubberRoundedCornerOverlayView : UICollectionReusableView

@property (readonly, nonatomic) UIColor *cornerColor; // ivar: _cornerColor
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSUInteger corners; // ivar: _corners


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif