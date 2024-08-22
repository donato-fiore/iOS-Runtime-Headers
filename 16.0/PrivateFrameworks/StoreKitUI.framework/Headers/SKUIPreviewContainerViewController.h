// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPREVIEWCONTAINERVIEWCONTROLLER_H
#define SKUIPREVIEWCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SKUIViewControllerPreviewing;



@interface SKUIPreviewContainerViewController : UIViewController <SKUIViewControllerPreviewing>



@property (retain, nonatomic) UIViewController *childViewController; // ivar: _childViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)previewCommitViewController;


@end


#endif