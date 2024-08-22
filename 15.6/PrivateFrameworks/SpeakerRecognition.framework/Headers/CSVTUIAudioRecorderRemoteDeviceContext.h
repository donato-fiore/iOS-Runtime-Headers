// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVTUIAUDIORECORDERREMOTEDEVICECONTEXT_H
#define CSVTUIAUDIORECORDERREMOTEDEVICECONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CSVTUIAudioRecorderRemoteDeviceContext : NSObject

@property (readonly, nonatomic) NSUInteger remoteTrainingDeviceType; // ivar: _remoteTrainingDeviceType
@property (readonly, copy, nonatomic) NSArray *remoteTrainingDeviceUUIDList; // ivar: _remoteTrainingDeviceUUIDList


-(id)initWithRemoteTrainingDeviceType:(NSUInteger)arg0 remoteTrainingDeviceUUIDList:(id)arg1 ;


@end


#endif