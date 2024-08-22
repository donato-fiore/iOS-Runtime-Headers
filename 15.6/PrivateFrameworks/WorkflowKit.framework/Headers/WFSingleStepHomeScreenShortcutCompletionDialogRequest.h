// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSINGLESTEPHOMESCREENSHORTCUTCOMPLETIONDIALOGREQUEST_H
#define WFSINGLESTEPHOMESCREENSHORTCUTCOMPLETIONDIALOGREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest <NSSecureCoding>

 {
    BOOL _requiresRunningShortcut;
}


@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)requiresRunningShortcut;
-(id)initWithShortcutName:(id)arg0 applicationBundleIdentifier:(id)arg1 ;
-(void)setRequiresRunningShortcut:(BOOL)arg0 ;


@end


#endif