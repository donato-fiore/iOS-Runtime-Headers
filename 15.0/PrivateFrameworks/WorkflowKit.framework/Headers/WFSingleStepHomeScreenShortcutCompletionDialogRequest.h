// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSINGLESTEPHOMESCREENSHORTCUTCOMPLETIONDIALOGREQUEST_H
#define WFSINGLESTEPHOMESCREENSHORTCUTCOMPLETIONDIALOGREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithShortcutName:(id)arg0 applicationBundleIdentifier:(id)arg1 ;


@end


#endif