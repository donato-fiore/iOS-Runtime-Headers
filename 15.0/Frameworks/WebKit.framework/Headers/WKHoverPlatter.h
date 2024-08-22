// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKHOVERPLATTER_H
#define WKHOVERPLATTER_H

@class UIView;
@protocol WKHoverPlatterDelegate;

#import <Foundation/Foundation.h>


@interface WKHoverPlatter : NSObject {
    UIView *_view;
    id<WKHoverPlatterDelegate> *_delegate;
    FloatPoint _hoverPoint;
    BOOL _hasOutstandingPositionInformationRequest;
    BOOL _hasDeferredPositionInformationRequest;
    BOOL _isSittingDown;
    FloatRect _lastHoverBounds;
    RetainPtr<CAShapeLayer> _lastMaskLayer;
    RetainPtr<CALayer> _lastShadowLayer;
    RetainPtr<CALayer> _lastPlatterLayer;
    RetainPtr<CALayer> _lastBackgroundLayer;
    RetainPtr<CAPortalLayer> _lastSnapshotLayer;
}


@property (nonatomic) FloatPoint hoverPoint;


-(id)initWithView:(id)arg0 delegate:(id)arg1 ;
-(void)clearLayers;
-(void)didFinishAnimationForShadow:(id)arg0 ;
-(void)didReceivePositionInformation:(*void)arg0 ;
-(void)dismissPlatterWithAnimation:(BOOL)arg0 ;
-(void)invalidate;
-(void)requestPositionInformationForCurrentHoverPoint;


@end


#endif