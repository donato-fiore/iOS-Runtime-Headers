// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKWATCHHEROIMAGEVIEW_H
#define PKWATCHHEROIMAGEVIEW_H

@class UIView, UILabel;



@interface PKWatchHeroImageView : UIView {
    UIView *_watchView;
    UILabel *_doneLabel;
    BOOL _useNewUI;
    CGSize _originalWatchViewSize;
}


@property (readonly, nonatomic) CGRect cardFrame;
@property (nonatomic) BOOL hideDoneLabel; // ivar: _hideDoneLabel
@property (readonly, nonatomic) BOOL isCompactWatch;
@property (readonly, nonatomic) CGFloat watchDeviceImageScaleFactor;
@property (readonly, nonatomic) CGPoint watchScreenCenter;
@property (readonly, nonatomic) CGRect watchScreenFrame;


+(id)_bridgeHeroImage;
+(id)watchDeviceImage;
-(id)_resizeImage:(id)arg0 toSize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_watchScreenInset;
-(struct CGRect )spaceBelowCardFrame;
-(struct CGSize )_heroWatchImageSize;
-(struct CGSize )_watchScreenSize:(CGFloat)arg0 ;
-(struct CGSize )imageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif