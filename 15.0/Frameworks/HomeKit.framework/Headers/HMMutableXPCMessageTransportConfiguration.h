// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEXPCMESSAGETRANSPORTCONFIGURATION_H
#define HMMUTABLEXPCMESSAGETRANSPORTCONFIGURATION_H



#import "HMXPCMessageTransportConfiguration.h"

@interface HMMutableXPCMessageTransportConfiguration : HMXPCMessageTransportConfiguration

@property NSUInteger requiredEntitlements;
@property BOOL requiresHomeDataAccess;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif