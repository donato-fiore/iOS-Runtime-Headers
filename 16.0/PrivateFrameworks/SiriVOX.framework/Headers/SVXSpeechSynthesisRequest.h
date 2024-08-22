// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSPEECHSYNTHESISREQUEST_H
#define SVXSPEECHSYNTHESISREQUEST_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesisAudio.h"

@interface SVXSpeechSynthesisRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *localizationKey; // ivar: _localizationKey
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) SVXSpeechSynthesisAudio *presynthesizedAudio; // ivar: _presynthesizedAudio
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSDictionary *speakableContext; // ivar: _speakableContext
@property (readonly, copy, nonatomic) NSString *speakableText; // ivar: _speakableText
@property (readonly, copy, nonatomic) NSString *streamID; // ivar: _streamID


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPriority:(NSInteger)arg0 options:(NSUInteger)arg1 speakableText:(id)arg2 speakableContext:(id)arg3 localizationKey:(id)arg4 presynthesizedAudio:(id)arg5 streamID:(id)arg6 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif