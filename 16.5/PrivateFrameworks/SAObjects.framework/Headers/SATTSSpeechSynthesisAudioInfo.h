// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATTSSPEECHSYNTHESISAUDIOINFO_H
#define SATTSSPEECHSYNTHESISAUDIOINFO_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SATTSSpeechSynthesisAudioInfo : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *wordTimingInfoList;


+(id)speechSynthesisAudioInfo;
+(id)speechSynthesisAudioInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif