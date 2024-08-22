// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERFANCONTROL_H
#define MTRCLUSTERFANCONTROL_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterFanControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFanModeSequenceWithParams:(id)arg0 ;
-(id)readAttributeFanModeWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributePercentCurrentWithParams:(id)arg0 ;
-(id)readAttributePercentSettingWithParams:(id)arg0 ;
-(id)readAttributeRockSettingWithParams:(id)arg0 ;
-(id)readAttributeRockSupportWithParams:(id)arg0 ;
-(id)readAttributeSpeedCurrentWithParams:(id)arg0 ;
-(id)readAttributeSpeedMaxWithParams:(id)arg0 ;
-(id)readAttributeSpeedSettingWithParams:(id)arg0 ;
-(id)readAttributeWindSettingWithParams:(id)arg0 ;
-(id)readAttributeWindSupportWithParams:(id)arg0 ;
-(void)writeAttributeFanModeSequenceWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeFanModeSequenceWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeFanModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeFanModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePercentSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePercentSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRockSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRockSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeSpeedSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeSpeedSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeWindSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeWindSettingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif