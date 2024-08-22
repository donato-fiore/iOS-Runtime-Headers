// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPICLOUDZONE_H
#define UARPICLOUDZONE_H

@class CKServerChangeToken, NSString, CKRecordZoneID;

#import <Foundation/Foundation.h>


@interface UARPiCloudZone : NSObject

@property (copy) CKServerChangeToken *changeToken; // ivar: _changeToken
@property (copy) NSString *containerID; // ivar: _containerID
@property (copy) CKRecordZoneID *zoneID; // ivar: _zoneID


-(id)initWithZoneID:(id)arg0 containerID:(id)arg1 ;


@end


#endif