// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWEBPAGETOFILTERTEXT_H
#define WFWEBPAGETOFILTERTEXT_H



#import "WFWebPageDecorator.h"

@interface WFWebPageToFilterText : WFWebPageDecorator



-(BOOL)isWorthAnalyzingWithEvidence:(*int)arg0 message:(*id)arg1 ;
-(BOOL)selfRestricted;
-(id)URLFuzzyForFilter;
-(id)URLFuzzyWithWordLength:(int)arg0 ;
-(id)rawPlainText;


@end


#endif