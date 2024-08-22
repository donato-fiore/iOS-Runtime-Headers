// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOSESSIONPORTDESCRIPTION_H
#define AVAUDIOSESSIONPORTDESCRIPTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "AVAudioSessionDataSourceDescription.h"

@interface AVAudioSessionPortDescription : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSString *UID;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly) BOOL hasHardwareVoiceCallProcessing;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly, getter=isSpatialAudioEnabled) BOOL spatialAudioEnabled;


+(id)privateCreateArray:(id)arg0 owningSession:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPort:(id)arg0 compareStrict:(BOOL)arg1 ;
-(BOOL)isHeadphones;
-(BOOL)isLiveListenSupported;
-(BOOL)isLowLatencyAirPlay;
-(NSUInteger)endpointType;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRawPortDescription:(id)arg0 owningSession:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(id)privateGetID;
-(struct PortDescriptionImpl *)privateGetImplementation;
-(void)configureChannelsAndDataSources:(id)arg0 ;
-(void)dealloc;
-(void)setSupportsSpatialAudio:(BOOL)arg0 ;


@end


#endif