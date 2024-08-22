// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCTEXTPOINTERTRACKINGVIEW_H
#define VKCTEXTPOINTERTRACKINGVIEW_H

@class UIView, NSString;
@protocol UIPointerInteractionDelegate;


#import "VKQuad.h"

@interface VKCTextPointerTrackingView : UIView <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VKQuad *quad; // ivar: _quad
@property (readonly) Class superclass;


-(id)initWithQuad:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;


@end


#endif