// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAARPARAPHRASEDALTERNATIVERESULTSPOD_H
#define SAARPARAPHRASEDALTERNATIVERESULTSPOD_H

@class NSArray, NSString;


#import "SAAceView.h"

@interface SAARParaphrasedAlternativeResultsPod : SAAceView

@property (copy, nonatomic) NSArray *alternativeResultViews;
@property (copy, nonatomic) NSString *title;


+(id)paraphrasedAlternativeResultsPod;
+(id)paraphrasedAlternativeResultsPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif