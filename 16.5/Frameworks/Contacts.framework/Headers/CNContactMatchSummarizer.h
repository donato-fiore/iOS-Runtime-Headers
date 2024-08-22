// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTMATCHSUMMARIZER_H
#define CNCONTACTMATCHSUMMARIZER_H


#import <Foundation/Foundation.h>


@interface CNContactMatchSummarizer : NSObject {
    *void _tokenList;
    *__CFStringTokenizer _tokenizer;
}




+(id)keyDescriptorForContactIdentifiers:(id)arg0 matchInfos:(id)arg1 ;
+(id)summaryProperties;
+(id)summaryPropertyForMatchInfo:(id)arg0 ;
-(id)attributedStringForPropertyValueString:(id)arg0 queryTerms:(id)arg1 outMatchCount:(*NSUInteger)arg2 ;
-(id)init;
-(id)summariesFutureForContactsIdentifiers:(id)arg0 matchInfos:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3 ;
-(id)summaryForContact:(id)arg0 matchInfo:(id)arg1 ;
-(void)dealloc;


@end


#endif