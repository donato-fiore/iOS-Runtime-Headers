// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNMUTABLENOTIFICATIONATTACHMENTOPTIONS_H
#define UNMUTABLENOTIFICATIONATTACHMENTOPTIONS_H

@class NSDictionary;


#import "UNNotificationAttachmentOptions.h"

@interface UNMutableNotificationAttachmentOptions : UNNotificationAttachmentOptions

@property (nonatomic) NSUInteger displayLocation;
@property (copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif