// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEGRIDOVERLAYVIEW_H
#define AEGRIDOVERLAYVIEW_H

@class UIView, NSString;
@protocol PXUIViewBasicTile, PXReusableObject;


#import "AEGridOverlayConfiguration.h"

@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // ivar: _overlayConfiguration
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(id)cloudBadge;
+(id)gradientShadow;
+(id)gridOverlayLayoutInfo;
+(id)loopBadge;
+(id)videoBadge;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(struct CGRect )_cloudRect;
-(struct CGRect )_loopRect;
-(struct CGRect )_videoRect;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)prepareForReuse;


@end


#endif