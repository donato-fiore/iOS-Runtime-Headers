// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMNOWPLAYINGEVENT_H
#define BMNOWPLAYINGEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMNowPlayingEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *album; // ivar: _album
@property (readonly, nonatomic) NSString *artist; // ivar: _artist
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int duration; // ivar: _duration
@property (readonly, nonatomic) unsigned int elapsed; // ivar: _elapsed
@property (readonly, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *iTunesStoreIdentifier; // ivar: _iTunesStoreIdentifier
@property (readonly, nonatomic) NSString *iTunesSubscriptionIdentifier; // ivar: _iTunesSubscriptionIdentifier
@property (readonly, nonatomic) BOOL isAirPlayVideo; // ivar: _isAirPlayVideo
@property (readonly, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSArray *outputDevices; // ivar: _outputDevices
@property (readonly, nonatomic) NSUInteger playbackState; // ivar: _playbackState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithDKEvent:(id)arg0 outputDevices:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueID:(id)arg0 bundleID:(id)arg1 absoluteTimestamp:(CGFloat)arg2 playbackState:(NSUInteger)arg3 album:(id)arg4 artist:(id)arg5 duration:(unsigned int)arg6 genre:(id)arg7 title:(id)arg8 elapsed:(unsigned int)arg9 mediaType:(id)arg10 iTunesStoreIdentifier:(id)arg11 iTunesSubscriptionIdentifier:(id)arg12 isAirPlayVideo:(BOOL)arg13 outputDevices:(id)arg14 ;
-(id)proto;
-(id)serialize;


@end


#endif