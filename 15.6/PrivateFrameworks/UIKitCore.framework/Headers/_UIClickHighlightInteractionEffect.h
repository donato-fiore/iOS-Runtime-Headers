// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICLICKHIGHLIGHTINTERACTIONEFFECT_H
#define _UICLICKHIGHLIGHTINTERACTIONEFFECT_H

@class NSString;
@protocol _UIClickHighlightEffect;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"
#import "_UIAnchoredClickHighlightPlatterView.h"

@interface _UIClickHighlightInteractionEffect : NSObject <_UIClickHighlightEffect>

 {
    NSInteger _phase;
    NSInteger _inflightAnimationCount;
    BOOL _isActive;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) UITargetedPreview *continuationPreview; // ivar: _continuationPreview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIAnchoredClickHighlightPlatterView *highlightPlatter; // ivar: _highlightPlatter
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview; // ivar: _targetedPreview
@property (readonly, nonatomic) UITargetedPreview *targetedPreviewForEffectContinuation;


+(id)effectWithPreview:(id)arg0 continuingFromPreview:(id)arg1 ;
-(id)initWithTargetedPreview:(id)arg0 continuingFromPreview:(id)arg1 ;
-(void)_completeHighlightEffect;
-(void)_createHighlightPlatter;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif