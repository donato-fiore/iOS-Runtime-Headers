// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBACKDROPEFFECTVIEW_H
#define _UIBACKDROPEFFECTVIEW_H

@class CABackdropLayer, NSString;
@protocol CABackdropLayerDelegate;


#import "UIView.h"

@interface _UIBackdropEffectView : UIView <CABackdropLayerDelegate>



@property (retain, nonatomic) CABackdropLayer *backdropLayer; // ivar: _backdropLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat zoom; // ivar: _zoom


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)init;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setContentScaleFactor:(CGFloat)arg0 ;


@end


#endif