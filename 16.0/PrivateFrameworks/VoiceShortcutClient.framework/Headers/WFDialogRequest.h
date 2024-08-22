// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDIALOGREQUEST_H
#define WFDIALOGREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFDialogAttribution.h"

@interface WFDialogRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) WFDialogAttribution *attribution; // ivar: _attribution
@property (readonly, nonatomic) NSString *prompt; // ivar: _prompt
@property (readonly, nonatomic) NSString *promptForDisplay;
@property (nonatomic) BOOL requiresRunningShortcut; // ivar: _requiresRunningShortcut
@property (readonly, nonatomic) BOOL shouldCenterPrompt;


+(BOOL)supportsSecureCoding;
-(id)initWithAppBundleIdentifier:(id)arg0 prompt:(id)arg1 ;
-(id)initWithAttribution:(id)arg0 prompt:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif