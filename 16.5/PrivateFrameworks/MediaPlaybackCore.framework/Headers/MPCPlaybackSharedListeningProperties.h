// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKSHAREDLISTENINGPROPERTIES_H
#define MPCPLAYBACKSHAREDLISTENINGPROPERTIES_H

@class NSString, ICLiveLink;
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCPlaybackSharedListeningProperties : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSString *sessionKey; // ivar: _sessionKey
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)payloadValueFromJSONValue:(id)arg0 ;
+(id)propertiesWithSessionIdentifier:(id)arg0 sessionKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mpc_jsonValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif