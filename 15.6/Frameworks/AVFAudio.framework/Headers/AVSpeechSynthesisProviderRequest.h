// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSPEECHSYNTHESISPROVIDERREQUEST_H
#define AVSPEECHSYNTHESISPROVIDERREQUEST_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AVSpeechSynthesisProviderVoice.h"

@interface AVSpeechSynthesisProviderRequest : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *ssmlRepresentation; // ivar: _ssmlRepresentation
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *voice; // ivar: _voice


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSSMLRepresentation:(id)arg0 voice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif