// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMYRIADADVERTISEMENTCONTEXTRECORD_H
#define AFMYRIADADVERTISEMENTCONTEXTRECORD_H

@class NSData, NSUUID;

#import <Foundation/Foundation.h>


@interface AFMyriadAdvertisementContextRecord : NSObject

@property (readonly, nonatomic) unsigned char advertisementContextVersion; // ivar: _advertisementContextVersion
@property (nonatomic) CGFloat advertisementDispatchTime; // ivar: _advertisementDispatchTime
@property (readonly, copy, nonatomic) NSData *advertisementPayload; // ivar: _advertisementPayload
@property (readonly, nonatomic) NSInteger advertisementRecordType; // ivar: _advertisementRecordType
@property (readonly, copy, nonatomic) NSUUID *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) CGFloat voiceTriggerEndTime; // ivar: _voiceTriggerEndTime


-(BOOL)compareAdvertisementPayload:(id)arg0 ;
-(BOOL)isSaneForVoiceTriggerEndTime:(CGFloat)arg0 endtimeDistanceThreshold:(CGFloat)arg1 ;
-(CGFloat)_getVoiceTriggerEndTimeForVersion:(unsigned char)arg0 data:(id)arg1 ;
-(NSUInteger)_advertismentPayloadSizeForVersion:(unsigned char)arg0 ;
-(char)_getAdvertismentRecordTypeForVersion:(unsigned char)arg0 data:(id)arg1 ;
-(id)_deviceIDFromBytes:(*unsigned char)arg0 ;
-(id)_getDeviceIdForVersion:(unsigned char)arg0 data:(id)arg1 ;
-(id)_getMyriadAdvertisementDataForVersion:(unsigned char)arg0 data:(id)arg1 ;
-(id)description;
-(id)initWithAdvertisementRecordType:(NSInteger)arg0 voiceTriggerEndTime:(CGFloat)arg1 advertisementPayload:(id)arg2 deviceID:(id)arg3 ;
-(id)initWithMyriadAdvertisementContextRecordData:(id)arg0 ;
-(id)myriadAdvertisementContextAsData;
-(id)recordForDeviceId:(id)arg0 ;
-(void)_initializeMyriadAdvertisementContextRecordFromData:(id)arg0 ;


@end


#endif