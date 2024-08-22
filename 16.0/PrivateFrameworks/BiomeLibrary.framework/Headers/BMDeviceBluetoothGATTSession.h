// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDEVICEBLUETOOTHGATTSESSION_H
#define BMDEVICEBLUETOOTHGATTSESSION_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMDeviceBluetoothGATTSession : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSupportsBackgrounding; // ivar: _hasSupportsBackgrounding
@property (nonatomic) BOOL hasSupportsStateRestoration; // ivar: _hasSupportsStateRestoration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *serviceUUID; // ivar: _serviceUUID
@property (readonly, nonatomic) int sessionState; // ivar: _sessionState
@property (readonly, nonatomic) NSString *sessionType; // ivar: _sessionType
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBackgrounding; // ivar: _supportsBackgrounding
@property (readonly, nonatomic) BOOL supportsStateRestoration; // ivar: _supportsStateRestoration


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 serviceUUID:(id)arg1 sessionType:(id)arg2 sessionState:(int)arg3 supportsBackgrounding:(id)arg4 supportsStateRestoration:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif