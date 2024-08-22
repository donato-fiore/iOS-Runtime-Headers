// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITCASERESULT_H
#define AXAUDITCASERESULT_H

@class NSMutableArray, NSArray, NSString;


#import "AXAuditTimedResult.h"
#import "AXAuditCategoryResult.h"

@interface AXAuditCaseResult : AXAuditTimedResult

@property (retain, nonatomic) NSMutableArray *_mutableIssues; // ivar: __mutableIssues
@property (retain, nonatomic) NSArray *auditIssues;
@property (copy, nonatomic) NSString *caseTitle; // ivar: _caseTitle
@property (weak, nonatomic) AXAuditCategoryResult *result; // ivar: _result


-(id)description;
-(id)init;
-(void)addAuditIssue:(id)arg0 ;


@end


#endif