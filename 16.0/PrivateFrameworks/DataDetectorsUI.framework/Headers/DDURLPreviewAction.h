// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDURLPREVIEWACTION_H
#define DDURLPREVIEWACTION_H



#import "DDPreviewAction.h"

@interface DDURLPreviewAction : DDPreviewAction



+(?)handlesUrlresult;
+(?)validatedURLWithURLresult;
-(BOOL)requiresEmbeddingNavigationController;
-(BOOL)showMenuTitle;
-(id)commitURL;
-(id)createViewController;
-(id)menuActions;
-(void)safariViewControllerDidFinish:(id)arg0 ;
-(void)setPreviewMode:(BOOL)arg0 ;


@end


#endif