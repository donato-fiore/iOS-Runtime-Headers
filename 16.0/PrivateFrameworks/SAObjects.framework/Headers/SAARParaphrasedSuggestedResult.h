// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAARPARAPHRASEDSUGGESTEDRESULT_H
#define SAARPARAPHRASEDSUGGESTEDRESULT_H

@class NSString;
@protocol SAClientBoundCommand;


#import "SAAceView.h"

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (retain, nonatomic) NSObject<SAClientBoundCommand> *command;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) NSInteger rank;


+(id)paraphrasedSuggestedResult;
+(id)paraphrasedSuggestedResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif