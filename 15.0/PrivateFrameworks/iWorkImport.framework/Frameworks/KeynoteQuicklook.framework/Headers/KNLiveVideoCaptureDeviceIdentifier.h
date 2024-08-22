// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNLIVEVIDEOCAPTUREDEVICEIDENTIFIER_H
#define KNLIVEVIDEOCAPTUREDEVICEIDENTIFIER_H

@class TSKSosBase, NSString;
@protocol NSCopying;



@interface KNLiveVideoCaptureDeviceIdentifier : TSKSosBase <NSCopying>

 {
    NSInteger _position;
    NSString *_deviceType;
}


@property (readonly, nonatomic) BOOL isIOSScreenRecordingDevice; // ivar: _isIOSScreenRecordingDevice
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSString *underlyingDeviceType;
@property (readonly, nonatomic) NSInteger underlyingPosition;
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUniqueID:(id)arg0 modelID:(id)arg1 underlyingPosition:(NSInteger)arg2 underlyingDeviceType:(id)arg3 localizedName:(id)arg4 isIOSScreenRecordingDevice:(BOOL)arg5 ;


@end


#endif