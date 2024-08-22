// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAARPARAPHRASEDALTERNATIVERESULT_H
#define SAARPARAPHRASEDALTERNATIVERESULT_H

@class NSString;
@protocol SAClientBoundCommand;


#import "SAAceView.h"

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (retain, nonatomic) NSObject<SAClientBoundCommand> *command;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *paraphrasedIntent;


+(id)paraphrasedAlternativeResult;
+(id)paraphrasedAlternativeResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif