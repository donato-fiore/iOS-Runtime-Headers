// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXUSERFEEDBACK_H
#define SVXUSERFEEDBACK_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXUserFeedbackAudioContent.h"
#import "SVXUserFeedbackVoiceContent.h"

@interface SVXUserFeedback : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SVXUserFeedbackAudioContent *audioContent; // ivar: _audioContent
@property (readonly, nonatomic) NSInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) SVXUserFeedbackVoiceContent *voiceContent; // ivar: _voiceContent


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 contentType:(NSInteger)arg1 audioContent:(id)arg2 voiceContent:(id)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif