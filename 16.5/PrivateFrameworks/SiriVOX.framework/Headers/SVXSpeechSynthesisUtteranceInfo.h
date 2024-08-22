// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSPEECHSYNTHESISUTTERANCEINFO_H
#define SVXSPEECHSYNTHESISUTTERANCEINFO_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXSpeechSynthesisUtteranceInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *utterance; // ivar: _utterance
@property (readonly, copy, nonatomic) NSArray *wordTimings; // ivar: _wordTimings


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUtterance:(id)arg0 wordTimings:(id)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif