// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKMAPLAYERHOSTINGVIEW_H
#define _MKMAPLAYERHOSTINGVIEW_H

@class UIView, VKMapView;



@interface _MKMapLayerHostingView : UIView

@property (retain, nonatomic) VKMapView *mapView; // ivar: _mapView


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif