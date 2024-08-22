// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFPOWERCONTEXTPOLICY_H
#define AFPOWERCONTEXTPOLICY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFPowerContextPolicy : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AFPowerContext asrAssistantPolicy; // ivar: _asrAssistantPolicy
@property (readonly, nonatomic) AFPowerContext asrDictationPolicy; // ivar: _asrDictationPolicy
@property (readonly, nonatomic) NSUInteger thermalMitigationLevel; // ivar: _thermalMitigationLevel
@property (readonly, nonatomic) AFPowerContext ttsPolicy; // ivar: _ttsPolicy


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)encodePolicy;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAsrAssistantPolicy:(struct AFPowerContext )arg0 asrDictationPolicy:(struct AFPowerContext )arg1 ttsPolicy:(struct AFPowerContext )arg2 ;
-(id)initWithAsrAssistantPolicy:(struct AFPowerContext )arg0 asrDictationPolicy:(struct AFPowerContext )arg1 ttsPolicy:(struct AFPowerContext )arg2 thermalMitigationLevel:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedPolicy:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif