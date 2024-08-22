// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBPRIVACYLINKCONTROLLER_IOS_H
#define OBPRIVACYLINKCONTROLLER_IOS_H

@class UIImageView, UITextView;


#import "OBPrivacyLinkController.h"
#import "OBPrivacyLinkButton.h"

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}


@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;


-(BOOL)_canShowWhileLocked;
-(id)initWithBundleIdentifiers:(id)arg0 ;
-(id)initWithPrivacyBundle:(id)arg0 ;
-(void)loadView;
-(void)processBundlesForTitleInformation;
-(void)setCustomTintColor:(id)arg0 ;
-(void)setLinkEnabled:(BOOL)arg0 ;
-(void)setUnderlineLinks:(BOOL)arg0 ;


@end


#endif