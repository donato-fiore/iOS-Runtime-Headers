// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILINGDEBUGUIVIEW_H
#define PXTILINGDEBUGUIVIEW_H

@class UIView, NSString;
@protocol PXTilingDebugDelegate;


#import "PXTilingControllerDebugInfo.h"

@interface PXTilingDebugUIView : UIView <PXTilingDebugDelegate>

 {
    CGFloat _debugWidth;
}


@property (retain, nonatomic, setter=_setDebugInfo:) PXTilingControllerDebugInfo *_debugInfo; // ivar: __debugInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tilingControllerDidUpdateDebugInfo:(id)arg0 ;


@end


#endif