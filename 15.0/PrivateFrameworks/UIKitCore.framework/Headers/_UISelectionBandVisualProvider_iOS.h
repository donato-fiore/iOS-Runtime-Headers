// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISELECTIONBANDVISUALPROVIDER_IOS_H
#define _UISELECTIONBANDVISUALPROVIDER_IOS_H

@class NSString;
@protocol UIPointerInteractionDelegate, _UISelectionBandVisualProviding;

#import <Foundation/Foundation.h>

#import "UIPointerInteraction.h"
#import "UIView.h"

@interface _UISelectionBandVisualProvider_iOS : NSObject <UIPointerInteractionDelegate, _UISelectionBandVisualProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialPoint; // ivar: _initialPoint
@property (retain, nonatomic) UIPointerInteraction *ptrInteraction; // ivar: _ptrInteraction
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_isActive;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)beginAtPoint:(struct CGPoint )arg0 ;
-(void)endAtPoint:(struct CGPoint )arg0 ;
-(void)updateWithPoint:(struct CGPoint )arg0 ;


@end


#endif