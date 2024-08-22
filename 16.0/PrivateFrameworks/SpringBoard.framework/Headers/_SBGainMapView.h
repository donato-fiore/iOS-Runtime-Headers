// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBGAINMAPVIEW_H
#define _SBGAINMAPVIEW_H

@class UIView;



@interface _SBGainMapView : UIView

@property (nonatomic) BOOL supportsHitTesting; // ivar: _supportsHitTesting


+(Class)layerClass;
-(id)gainMapLayer;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif