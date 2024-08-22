// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSERIALIZEDRECORD_H
#define HDCLOUDSYNCSERIALIZEDRECORD_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HDCloudSyncSerializedRecord : NSObject

@property (readonly, copy, nonatomic) NSData *protectedDBData; // ivar: _protectedDBData
@property (readonly, copy, nonatomic) NSData *systemData; // ivar: _systemData
@property (readonly, copy, nonatomic) NSData *unprotectedDBData; // ivar: _unprotectedDBData


-(id)initWithEncodedSystemData:(id)arg0 unprotectedDBData:(id)arg1 protectedDBData:(id)arg2 ;


@end


#endif