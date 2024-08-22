// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIODEVICE_H
#define AVAUDIODEVICE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface AVAudioDevice : NSObject {
    BOOL _isBluetoothDevice;
    BOOL _isLineIn;
}


@property (readonly, nonatomic) NSString *UID; // ivar: _UID
@property (readonly, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL inputAvailable; // ivar: _inputAvailable
@property (readonly, nonatomic) BOOL isBluetoothDevice;
@property (readonly, nonatomic) BOOL outputAvailable; // ivar: _outputAvailable
@property (readonly, nonatomic, getter=isPreferredDevice) BOOL preferredDevice; // ivar: _preferredDevice


-(*unsigned int)allocDeviceControlListAndSize:(*unsigned int)arg0 ;
-(BOOL)copyStreamIDArray:(**unsigned int)arg0 length:(*unsigned int)arg1 ;
-(BOOL)deviceHasNonTapStreamsInStreamList:(*unsigned int)arg0 length:(unsigned int)arg1 ;
-(BOOL)hasRealInputStream;
-(BOOL)isAggregableDevice;
-(BOOL)isBuiltInDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSomethingConnectedToJack;
-(BOOL)isStreamAvailableForScope:(unsigned int)arg0 ;
-(BOOL)isValidDevice;
-(BOOL)isValidInputDevice;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDeviceID:(id)arg0 ;
-(id)newAudioObjectStringPropertyWithSelector:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
-(unsigned int)getDataSourceControlID;
-(void)createName;
-(void)createNameForScope:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif