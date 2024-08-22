// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPOWERCONTEXTPOLICY_H
#define AFPOWERCONTEXTPOLICY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFPowerContextPolicy : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AFPowerContext asrAssistantPolicy; // ivar: _asrAssistantPolicy
@property (readonly, nonatomic) AFPowerContext asrDictationPolicy; // ivar: _asrDictationPolicy
@property (readonly, nonatomic) AFPowerContext ttsPolicy; // ivar: _ttsPolicy


+(BOOL)supportsSecureCoding;
+(NSUInteger)encodePowerContext:(struct AFPowerContext )arg0 ;
+(struct AFPowerContext )decodePowerContext:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)encodePolicy;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAsrAssistantPolicy:(struct AFPowerContext )arg0 asrDictationPolicy:(struct AFPowerContext )arg1 ttsPolicy:(struct AFPowerContext )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedPolicy:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif