// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCMUTABLENOTIFICATIONDATA_H
#define FCMUTABLENOTIFICATIONDATA_H

@class NSString, NSMutableDictionary;
@protocol FCMutableNotificationData;


#import "FCNotificationDropboxData.h"

@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>



@property (copy, nonatomic) NSString *baseURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceDigestMode;
@property (copy, nonatomic) NSString *deviceToken;
@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *notificationUserID;
@property (copy, nonatomic) NSString *storefrontID;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif