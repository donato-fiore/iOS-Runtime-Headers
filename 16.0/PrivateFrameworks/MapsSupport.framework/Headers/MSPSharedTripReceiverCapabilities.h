// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPSHAREDTRIPRECEIVERCAPABILITIES_H
#define MSPSHAREDTRIPRECEIVERCAPABILITIES_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying>

 {
    NSSet *_supportedProperties;
    NSSet *_unsupportedProperties;
}


@property (readonly, nonatomic) BOOL supportsRoutingPathLeg;
@property (readonly, nonatomic) BOOL supportsWaypointRouteSharing;


+(id)legacyReceiverCapabilities;
+(id)starskyReceiverCapabilities;
+(id)sydromeReceiverCapabilities;
+(id)unrestrictedReceiverCapabilities;
+(void)enumerateReceiverCapabilityConfigurationsForState:(id)arg0 withBlock:(id)arg1 ;
+(void)enumerateReceiverCapabilityConfigurationsWithBlock:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)idsSendMessageOptions;
-(id)initWithRegistrationPropertiesSupported:(id)arg0 propertiesUnsupported:(id)arg1 ;


@end


#endif