// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITCATEGORYRESULT_H
#define AXAUDITCATEGORYRESULT_H

@class NSMutableArray, NSMutableString, NSArray, NSString;
@protocol AXAuditCategoryResultDelegate;


#import "AXAuditTimedResult.h"

@interface AXAuditCategoryResult : AXAuditTimedResult

@property (retain, nonatomic) NSMutableArray *_mutableCases; // ivar: __mutableCases
@property (retain, nonatomic) NSMutableString *_mutableLog; // ivar: __mutableLog
@property (readonly, nonatomic) NSArray *caseResults;
@property (weak, nonatomic) NSObject<AXAuditCategoryResultDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *title; // ivar: _title


-(NSInteger)issueCount;
-(id)allIssues;
-(id)description;
-(id)init;
-(id)issueSummaryStrings;
-(id)log;
-(void)addCaseResult:(id)arg0 ;
-(void)appendLog:(id)arg0 ;


@end


#endif