// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINULLCLICKHIGHLIGHTEFFECT_H
#define _UINULLCLICKHIGHLIGHTEFFECT_H

@class NSString;
@protocol _UIClickHighlightEffect;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface _UINullClickHighlightEffect : NSObject <_UIClickHighlightEffect>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview; // ivar: _targetedPreview
@property (readonly, nonatomic) UITargetedPreview *targetedPreviewForEffectContinuation;


+(id)effectWithPreview:(id)arg0 continuingFromPreview:(id)arg1 ;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif