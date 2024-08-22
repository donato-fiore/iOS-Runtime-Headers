// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKMUNINLAYERHOSTINGVIEW_H
#define _MKMUNINLAYERHOSTINGVIEW_H

@class UIView, VKMapView;



@interface _MKMuninLayerHostingView : UIView

@property (retain, nonatomic) VKMapView *muninView; // ivar: _muninView


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif