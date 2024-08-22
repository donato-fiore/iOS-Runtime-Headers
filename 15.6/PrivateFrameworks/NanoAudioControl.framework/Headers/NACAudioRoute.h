// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NACAUDIOROUTE_H
#define NACAUDIOROUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NACAudioRoute : NSObject

@property (readonly, nonatomic, getter=isPicked) BOOL picked; // ivar: _picked
@property (readonly, nonatomic) NSString *routeName; // ivar: _routeName
@property (readonly, nonatomic) NSInteger routeType; // ivar: _routeType
@property (readonly, nonatomic) BOOL supportsVolumeControl; // ivar: _supportsVolumeControl
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(NSInteger)_routeTypeFromMPAVRoute:(id)arg0 ;
+(NSInteger)_routeTypeFromRouteBufferType:(int)arg0 ;
+(id)audioRouteFromBuffer:(id)arg0 ;
+(id)audioRouteWithMPAVRoute:(id)arg0 ;
+(id)audioRoutesFromBuffers:(id)arg0 ;
+(id)buffersFromAudioRoutes:(id)arg0 ;
+(int)_routeBufferTypeFromRouteType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAudioRoute:(id)arg0 ;
-(id)buffer;
-(id)description;
-(id)initWithMPAVRoute:(id)arg0 ;


@end


#endif