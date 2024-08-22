// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKLOOKAROUNDLAYERHOSTINGVIEW_H
#define _MKLOOKAROUNDLAYERHOSTINGVIEW_H

@class UIView, VKMapView;



@interface _MKLookAroundLayerHostingView : UIView

@property (retain, nonatomic) VKMapView *lookAroundView; // ivar: _lookAroundView


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif