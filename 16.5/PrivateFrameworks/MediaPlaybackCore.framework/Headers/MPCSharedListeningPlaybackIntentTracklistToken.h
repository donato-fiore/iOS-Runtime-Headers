// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSHAREDLISTENINGPLAYBACKINTENTTRACKLISTTOKEN_H
#define MPCSHAREDLISTENINGPLAYBACKINTENTTRACKLISTTOKEN_H

@class NSString, ICLiveLinkIdentity;
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPCPlaybackSharedListeningProperties.h"

@interface MPCSharedListeningPlaybackIntentTracklistToken : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) ICLiveLinkIdentity *identity; // ivar: _identity
@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties; // ivar: _sharedListeningProperties
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)payloadValueFromJSONValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mpc_jsonValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif