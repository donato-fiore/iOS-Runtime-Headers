// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLSOURCEDEVICEMIGRATIONMETADATA_H
#define WLSOURCEDEVICEMIGRATIONMETADATA_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WLSourceDeviceMigrationMetadata : NSObject

@property (nonatomic) NSUInteger attemptCount; // ivar: _attemptCount
@property (copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (retain, nonatomic) NSDate *communicationDate; // ivar: _communicationDate
@property (nonatomic) NSUInteger crashCount; // ivar: _crashCount
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (retain, nonatomic) NSString *deviceOSVersion; // ivar: _deviceOSVersion
@property (retain, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (nonatomic) NSUInteger state; // ivar: _state




@end


#endif