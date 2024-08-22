// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDREMOTEACTION_H
#define DDREMOTEACTION_H



#import "DDPreviewAction.h"

@interface DDRemoteAction : DDPreviewAction



+(id)viewControllerProviderClass;
-(id)createViewController;
-(id)previewActions;
-(void)setPreviewMode:(BOOL)arg0 ;


@end


#endif