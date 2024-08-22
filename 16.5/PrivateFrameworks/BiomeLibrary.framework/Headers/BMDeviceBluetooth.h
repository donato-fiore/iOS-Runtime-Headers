// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDEVICEBLUETOOTH_H
#define BMDEVICEBLUETOOTH_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMDeviceBluetooth : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) BOOL appleAudioDevice; // ivar: _appleAudioDevice
@property (readonly, nonatomic) int batteryLevelHeadphoneCase; // ivar: _batteryLevelHeadphoneCase
@property (readonly, nonatomic) int batteryLevelHeadphoneLeft; // ivar: _batteryLevelHeadphoneLeft
@property (readonly, nonatomic) int batteryLevelHeadphoneRight; // ivar: _batteryLevelHeadphoneRight
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) BOOL hasAppleAudioDevice; // ivar: _hasAppleAudioDevice
@property (nonatomic) BOOL hasBatteryLevelHeadphoneCase; // ivar: _hasBatteryLevelHeadphoneCase
@property (nonatomic) BOOL hasBatteryLevelHeadphoneLeft; // ivar: _hasBatteryLevelHeadphoneLeft
@property (nonatomic) BOOL hasBatteryLevelHeadphoneRight; // ivar: _hasBatteryLevelHeadphoneRight
@property (nonatomic) BOOL hasProductID; // ivar: _hasProductID
@property (nonatomic) BOOL hasStarting; // ivar: _hasStarting
@property (nonatomic) BOOL hasUserWearing; // ivar: _hasUserWearing
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int productID; // ivar: _productID
@property (readonly, nonatomic) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userWearing; // ivar: _userWearing


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAddress:(id)arg0 name:(id)arg1 productID:(id)arg2 starting:(id)arg3 deviceType:(int)arg4 batteryLevelHeadphoneCase:(id)arg5 batteryLevelHeadphoneRight:(id)arg6 batteryLevelHeadphoneLeft:(id)arg7 appleAudioDevice:(id)arg8 userWearing:(id)arg9 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif