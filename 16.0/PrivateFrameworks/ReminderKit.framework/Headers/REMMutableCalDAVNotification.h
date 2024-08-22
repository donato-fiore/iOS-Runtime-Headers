// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMMUTABLECALDAVNOTIFICATION_H
#define REMMUTABLECALDAVNOTIFICATION_H

@class NSString, NSURL;
@protocol REMExternalSyncMetadataWritableProviding;


#import "REMCalDAVNotification.h"

@interface REMMutableCalDAVNotification : REMCalDAVNotification <REMExternalSyncMetadataWritableProviding>



@property (copy, nonatomic) NSString *daPushKey;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (retain, nonatomic) NSURL *hostURL;
@property (retain, nonatomic) NSString *uuidString;




@end


#endif