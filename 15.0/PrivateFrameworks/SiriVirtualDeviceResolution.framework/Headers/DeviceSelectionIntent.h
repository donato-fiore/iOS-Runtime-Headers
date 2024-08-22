// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVICESELECTIONINTENT_H
#define DEVICESELECTIONINTENT_H

@class INIntent, NSString, NSDateComponents;



@interface DeviceSelectionIntent : INIntent

@property (copy, nonatomic) NSString *intentType;
@property (nonatomic) NSInteger interactionType;
@property (copy, nonatomic) NSString *remoteDeviceID;
@property (copy, nonatomic) NSDateComponents *requestTime;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSString *voiceID;


+(BOOL)supportsSecureCoding;


@end


#endif