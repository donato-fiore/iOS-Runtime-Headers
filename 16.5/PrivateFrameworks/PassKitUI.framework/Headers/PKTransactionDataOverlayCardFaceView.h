// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONDATAOVERLAYCARDFACEVIEW_H
#define PKTRANSACTIONDATAOVERLAYCARDFACEVIEW_H

@class UIView, PKPass, UIImageView, PKCategoryVisualizationCardView, PKPaymentService, NSString;
@protocol PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver;



@interface PKTransactionDataOverlayCardFaceView : UIView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver>

 {
    PKPass *_pass;
    UIImageView *_maskView;
    PKCategoryVisualizationCardView *_overlayView;
    PKPaymentService *_paymentService;
    BOOL _invalidated;
    BOOL _foregroundActive;
    int _unlockNotifyToken;
}


@property (nonatomic, getter=isContentSuppressed) BOOL contentSuppressed; // ivar: _contentSuppressed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) Class superclass;


+(CGFloat)borderWidth;
+(id)borderColor;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 rendererState:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 rendererState:(id)arg2 fetchInitialContentSynchronously:(BOOL)arg3 ;
-(id)rendererState;
-(void)_updateContentIfPossible;
-(void)_updateMagnitudesWithStyle:(NSInteger)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateCategoryVisualizationWithStyle:(NSInteger)arg1 ;


@end


#endif