// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYERAUDIOROUTE_H
#define MPCPLAYERAUDIOROUTE_H

@class NSString, NSDictionary, MPNowPlayingInfoAudioRoute;
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying;

#import <Foundation/Foundation.h>


@interface MPCPlayerAudioRoute : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying>



@property (readonly, nonatomic) BOOL canRenderSpatial; // ivar: _canRenderSpatial
@property (readonly, nonatomic) BOOL canStreamSpatial; // ivar: _canStreamSpatial
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) BOOL isSpatializationEnabled; // ivar: _isSpatializationEnabled
@property (readonly, nonatomic) NSInteger multiChannelSupport; // ivar: _multiChannelSupport
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) MPNowPlayingInfoAudioRoute *nowPlayingAudioRoute;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSpatialization; // ivar: _supportsSpatialization
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)payloadValueFromJSONValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithNowPlayingInfoAudioRoute:(id)arg0 ;
-(id)initWithRoute:(id)arg0 spatialIsAlwaysOn:(BOOL)arg1 ;
-(id)mpc_jsonValue;


@end


#endif