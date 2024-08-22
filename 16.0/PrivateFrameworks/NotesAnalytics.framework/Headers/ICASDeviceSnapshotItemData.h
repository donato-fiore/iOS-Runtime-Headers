// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDEVICESNAPSHOTITEMDATA_H
#define ICASDEVICESNAPSHOTITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDeviceSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *bioAuthEnabled; // ivar: _bioAuthEnabled
@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) NSString *devicePlatform; // ivar: _devicePlatform
@property (readonly, nonatomic) NSNumber *localNotesEnabled; // ivar: _localNotesEnabled
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion


+(id)dataName;
-(id)initWithDeviceModel:(id)arg0 devicePlatform:(id)arg1 bioAuthEnabled:(id)arg2 localNotesEnabled:(id)arg3 osVersion:(id)arg4 deviceID:(id)arg5 ;
-(id)toDict;


@end


#endif