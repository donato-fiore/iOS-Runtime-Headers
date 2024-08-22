// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITESTINGCONTEXT_H
#define SIRITESTINGCONTEXT_H

@class NSDictionary, AFRequestInfo;


#import "SiriContext.h"

@interface SiriTestingContext : SiriContext

@property (readonly, nonatomic) NSDictionary *testingContext; // ivar: _testingContext
@property (readonly, nonatomic) AFRequestInfo *testingRequestInfo; // ivar: _testingRequestInfo


+(BOOL)supportsSecureCoding;
-(BOOL)containsAudioInput;
-(BOOL)containsRecognitionStrings;
-(id)description;
-(id)initWithAudioInput:(id)arg0 ;
-(id)initWithAudioInput:(id)arg0 siriContextOverride:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPPTContext:(id)arg0 ;
-(id)initWithPPTContext:(id)arg0 siriContextOverride:(id)arg1 ;
-(id)initWithRecognitionStrings:(id)arg0 ;
-(id)initWithRecognitionStrings:(id)arg0 siriContextOverride:(id)arg1 ;
-(id)initWithRequestInfo:(id)arg0 recognitionStrings:(id)arg1 ;
-(id)initWithRequestInfo:(id)arg0 recognitionStrings:(id)arg1 siriContextOverride:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif