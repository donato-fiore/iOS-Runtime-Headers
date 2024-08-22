// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICONTEXT_H
#define SIRICONTEXT_H

@class AFSpeechRequestOptions;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SiriContextOverride.h"

@interface SiriContext : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) SiriContextOverride *contextOverride; // ivar: _contextOverride
@property (readonly, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // ivar: _speechRequestOptions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextOverride:(id)arg0 ;
-(id)initWithSpeechRequestOptions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif