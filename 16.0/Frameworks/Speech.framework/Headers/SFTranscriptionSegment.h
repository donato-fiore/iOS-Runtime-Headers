// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTRANSCRIPTIONSEGMENT_H
#define SFTRANSCRIPTIONSEGMENT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFVoiceAnalytics.h"

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *alternativeConfidences; // ivar: _alternativeConfidences
@property (readonly, nonatomic) NSArray *alternativeSubstrings; // ivar: _alternativeSubstrings
@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *ipaPhoneSequence; // ivar: _ipaPhoneSequence
@property (readonly, nonatomic) NSString *phoneSequence; // ivar: _phoneSequence
@property (readonly, copy, nonatomic) NSString *substring; // ivar: _substring
@property (readonly, nonatomic) _NSRange substringRange; // ivar: _substringRange
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics; // ivar: _voiceAnalytics


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithSubstring:(id)arg0 range:(struct _NSRange )arg1 timestamp:(CGFloat)arg2 duration:(CGFloat)arg3 confidence:(float)arg4 alternativeSubstrings:(id)arg5 alternativeConfidences:(id)arg6 phoneSequence:(id)arg7 ipaPhoneSequence:(id)arg8 voiceAnalytics:(id)arg9 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif