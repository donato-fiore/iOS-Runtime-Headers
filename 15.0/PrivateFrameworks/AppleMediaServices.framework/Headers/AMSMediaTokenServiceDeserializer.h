// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMEDIATOKENSERVICEDESERIALIZER_H
#define AMSMEDIATOKENSERVICEDESERIALIZER_H


#import <Foundation/Foundation.h>


@interface AMSMediaTokenServiceDeserializer : NSObject



+(id)_correctPayload:(id)arg0 ;
+(id)_deserializeMediaTokenDictionary:(id)arg0 ;
+(id)mediaTokenFromDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif