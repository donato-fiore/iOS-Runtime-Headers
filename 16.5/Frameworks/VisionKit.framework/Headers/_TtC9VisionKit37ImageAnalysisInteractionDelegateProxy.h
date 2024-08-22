// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9VISIONKIT37IMAGEANALYSISINTERACTIONDELEGATEPROXY_H
#define _TTC9VISIONKIT37IMAGEANALYSISINTERACTIONDELEGATEPROXY_H

@protocol VKCImageAnalysisInteractionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9VisionKit37ImageAnalysisInteractionDelegateProxy : NSObject <VKCImageAnalysisInteractionDelegate>

 {
    ? owner;
}




-(BOOL)imageAnalysisInteraction:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 forAnalysisType:(NSUInteger)arg2 ;
-(id)contentViewForImageAnalysisInteraction:(id)arg0 ;
-(id)init;
-(id)presentingViewControllerForImageAnalysisInteraction:(id)arg0 ;
-(struct CGRect )contentsRectForImageAnalysisInteraction:(id)arg0 ;
-(void)imageAnalysisInteraction:(id)arg0 highlightSelectedItemsValueDidChange:(BOOL)arg1 ;
-(void)imageAnalysisInteraction:(id)arg0 liveTextButtonDidChangeToVisible:(BOOL)arg1 ;


@end


#endif