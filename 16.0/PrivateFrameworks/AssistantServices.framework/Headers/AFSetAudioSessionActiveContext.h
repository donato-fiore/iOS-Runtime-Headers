// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSETAUDIOSESSIONACTIVECONTEXT_H
#define AFSETAUDIOSESSIONACTIVECONTEXT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFSpeechRequestOptions.h"

@interface AFSetAudioSessionActiveContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // ivar: _speechRequestOptions


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 speechRequestOptions:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif