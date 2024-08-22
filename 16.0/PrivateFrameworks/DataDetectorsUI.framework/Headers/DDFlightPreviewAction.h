// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDFLIGHTPREVIEWACTION_H
#define DDFLIGHTPREVIEWACTION_H



#import "DDRemoteAction.h"

@interface DDFlightPreviewAction : DDRemoteAction {
    BOOL _previewModeSet;
}




+(id)viewControllerProviderClass;
-(BOOL)wantsCustomViewControllerCommit;
-(id)expandViewController;
-(id)menuActionClasses;
-(id)previewActions;
-(struct CGSize )suggestedContentSize;
-(void)setPreviewMode:(BOOL)arg0 ;


@end


#endif