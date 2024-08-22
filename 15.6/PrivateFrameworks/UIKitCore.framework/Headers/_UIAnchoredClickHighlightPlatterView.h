// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIANCHOREDCLICKHIGHLIGHTPLATTERVIEW_H
#define _UIANCHOREDCLICKHIGHLIGHTPLATTERVIEW_H

@class UIHighlightPlatterView;


#import "_UIMorphingView.h"

@interface _UIAnchoredClickHighlightPlatterView : UIHighlightPlatterView

@property (weak, nonatomic) _UIMorphingView *anchorView; // ivar: _anchorView


-(id)initWithTargetedPreview:(id)arg0 ;
-(void)anchorToContainer;
-(void)deAnchor;


@end


#endif