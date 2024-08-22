// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPAUDIOSTREAMCODECCONFIGURATION_H
#define HAPAUDIOSTREAMCODECCONFIGURATION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPAudioStreamCodecParameters.h"
#import "HAPAudioCodecTypeWrapper.h"

@interface HAPAudioStreamCodecConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPAudioStreamCodecParameters *codecParameters; // ivar: _codecParameters
@property (retain, nonatomic) HAPAudioCodecTypeWrapper *codecType; // ivar: _codecType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCodecType:(id)arg0 codecParameters:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif