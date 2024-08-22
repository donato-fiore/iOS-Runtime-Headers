// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNVCARDPARSINGCONCURRENTSTRATEGY_H
#define _CNVCARDPARSINGCONCURRENTSTRATEGY_H

@class NSString;
@protocol CNVCardParsingConcurrencyStrategy;

#import <Foundation/Foundation.h>


@interface _CNVCardParsingConcurrentStrategy : NSObject <CNVCardParsingConcurrencyStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)parseData:(id)arg0 options:(id)arg1 resultFactory:(id)arg2 ;
-(id)seriallyParsedData:(id)arg0 options:(id)arg1 resultFactory:(id)arg2 ;


@end


#endif