// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSFOLLOWUPAUTOUPDATE_H
#define SUSFOLLOWUPAUTOUPDATE_H



#import "SUSFollowUp.h"

@interface SUSFollowUpAutoUpdate : SUSFollowUp



+(CGFloat)notificationFrequency;
+(NSUInteger)displayStyle;
+(id)actions;
+(id)extensionIdentifier;
+(id)identifier;
+(id)informativeTextWithDescriptor:(id)arg0 ;
+(id)notificationInformativeTextWithDescriptor:(id)arg0 ;
+(id)notificationInstallLater;
+(id)notificationInstallNowAction;
+(id)notificationOptions;
+(id)notificationTitleWithDescriptor:(id)arg0 ;
+(id)notificationWithDescriptor:(id)arg0 ;
+(id)titleWithDescriptor:(id)arg0 ;


@end


#endif