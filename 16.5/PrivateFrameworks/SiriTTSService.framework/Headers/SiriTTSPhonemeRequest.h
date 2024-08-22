// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSPHONEMEREQUEST_H
#define SIRITTSPHONEMEREQUEST_H

@class NSString;


#import "SiriTTSBaseRequest.h"
#import "SiriTTSSynthesisVoice.h"

@interface SiriTTSPhonemeRequest : SiriTTSBaseRequest {
    ? text;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSInteger phonemeSystem; // ivar: phonemeSystem
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice; // ivar: voice


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 voice:(id)arg1 phonemeSystem:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif