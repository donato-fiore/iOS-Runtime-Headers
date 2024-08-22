// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDCONTEXTMENUCONFIGURATION_H
#define DDCONTEXTMENUCONFIGURATION_H

@class UIContextMenuConfiguration, NSURL;



@interface DDContextMenuConfiguration : UIContextMenuConfiguration

@property (nonatomic) BOOL expandPreviewOnInteraction; // ivar: expandPreviewOnInteraction
@property (retain, nonatomic) NSURL *interactionURL; // ivar: interactionURL
@property (copy, nonatomic) id *interactionViewControllerProvider; // ivar: interactionViewControllerProvider
@property (nonatomic) BOOL prefersActionMenuStyle; // ivar: prefersActionMenuStyle


-(BOOL)performPreviewActionForMenuWithAnimator:(id)arg0 ;


@end


#endif