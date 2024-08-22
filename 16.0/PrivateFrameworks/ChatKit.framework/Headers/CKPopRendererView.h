// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPOPRENDERERVIEW_H
#define CKPOPRENDERERVIEW_H

@class UIView;
@protocol CKPopRendererViewDelegate;



@interface CKPopRendererView : UIView {
    ? device;
    ? commandQueue;
    ? renderer;
    ? startTimestamp;
    ? sourceTexture;
    ? isStarted;
    ? isSoundPlayed;
    ? metalLayer;
    ? displayLink;
    ? renderScale;
}


@property (nonatomic, retain) NSObject<CKPopRendererViewDelegate> *delegate; // ivar: delegate


+(CGFloat)duration;
-(BOOL)playWithSourceView:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 device:(id)arg1 ;
-(struct CGRect )frameForSourceFrame:(struct CGRect )arg0 ;
-(void)didEnterBackgroundFrom:(id)arg0 ;
-(void)didMoveToWindow;
-(void)drawFrom:(id)arg0 ;
-(void)layoutSubviews;
-(void)willEnterForegroundFrom:(id)arg0 ;


@end


#endif