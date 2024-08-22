// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTORYBOARDPREVIEWINGREGISTRANT_H
#define UISTORYBOARDPREVIEWINGREGISTRANT_H

@class NSString;
@protocol NSCoding, UIViewControllerPreviewingDelegate, UIViewControllerPreviewing;

#import <Foundation/Foundation.h>

#import "UIStoryboardPreviewingSegueTemplateStorage.h"
#import "UIView.h"
#import "UIViewController.h"

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate>

 {
    id<UIViewControllerPreviewing> *_previewingContext;
    UIStoryboardPreviewingSegueTemplateStorage *_segueTemplateStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithCoder:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)registerForPreviewing;
-(void)unregisterForPreviewing;


@end


#endif