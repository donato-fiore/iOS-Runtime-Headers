// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBOXINVITEACTIVITY_H
#define UIBOXINVITEACTIVITY_H

@class NSAttributedString;


#import "UIFileProviderApplicationExtensionActivity.h"

@interface UIBoxInviteActivity : UIFileProviderApplicationExtensionActivity

@property (copy, nonatomic) NSAttributedString *boxFooterText; // ivar: _boxFooterText
@property (nonatomic) BOOL isiWorkFile; // ivar: _isiWorkFile


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_actionImage;
-(id)_activityFooterText;
-(id)activityTitle;


@end


#endif