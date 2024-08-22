// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCLUSTERCOMPONENTOUTPUTDEVICEDESCRIPTION_H
#define AVCLUSTERCOMPONENTOUTPUTDEVICEDESCRIPTION_H

@class NSString;
@protocol AVOutputDeviceDescription;

#import <Foundation/Foundation.h>


@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSInteger deviceSubType; // ivar: _deviceSubType
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isClusterLeader; // ivar: _isClusterLeader
@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly) Class superclass;


-(id)initWithDeviceID:(id)arg0 deviceName:(id)arg1 deviceSubType:(NSInteger)arg2 isClusterLeader:(BOOL)arg3 modelID:(id)arg4 ;
-(void)dealloc;


@end


#endif