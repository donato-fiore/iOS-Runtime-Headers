// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDPREVIEWACTION_H
#define DDPREVIEWACTION_H



#import "DDAction.h"

@interface DDPreviewAction : DDAction



+(?)previewActionForURL:(?)arg0 resultcontext;
-(BOOL)prefersActionMenuStyle;
-(BOOL)requiresEmbeddingNavigationController;
-(BOOL)showMenuTitle;
-(BOOL)wantsCustomViewControllerCommit;
-(BOOL)wantsSeamlessCommit;
-(id)commitURL;
-(id)createViewController;
-(id)expandViewController;
-(id)menuActionClasses;
-(id)menuActions;
-(id)menuHeaderView;
-(id)platterSubtitle;
-(id)platterTitle;
-(id)previewViewController;
-(id)viewController;
-(struct CGSize )suggestedContentSize;
-(void)dealloc;
-(void)setPreviewMode:(BOOL)arg0 ;


@end


#endif