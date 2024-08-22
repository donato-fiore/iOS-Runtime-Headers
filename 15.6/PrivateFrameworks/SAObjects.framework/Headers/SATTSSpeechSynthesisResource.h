// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATTSSPEECHSYNTHESISRESOURCE_H
#define SATTSSPEECHSYNTHESISRESOURCE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SATTSSpeechSynthesisResource : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *resourceVersion;
@property (readonly) Class superclass;


+(id)speechSynthesisResource;
+(id)speechSynthesisResourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif