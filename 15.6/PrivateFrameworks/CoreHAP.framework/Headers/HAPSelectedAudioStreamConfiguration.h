// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPSELECTEDAUDIOSTREAMCONFIGURATION_H
#define HAPSELECTEDAUDIOSTREAMCONFIGURATION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPAudioStreamCodecConfiguration.h"

@interface HAPSelectedAudioStreamConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPAudioStreamCodecConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif