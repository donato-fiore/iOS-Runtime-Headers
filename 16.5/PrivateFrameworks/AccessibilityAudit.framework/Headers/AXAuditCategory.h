// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITCATEGORY_H
#define AXAUDITCATEGORY_H

@class NSMutableArray, NSSet, NSArray, NSString;
@protocol AXAuditCategoryDelegate;

#import <Foundation/Foundation.h>

#import "AXAuditCategoryResult.h"
#import "AXAuditCaseResult.h"

@interface AXAuditCategory : NSObject

@property (retain, nonatomic) NSMutableArray *_currentTestingCaseSelectors; // ivar: __currentTestingCaseSelectors
@property (retain, nonatomic) AXAuditCategoryResult *_result; // ivar: __result
@property (readonly, nonatomic) NSSet *allSupportedAuditTypes;
@property (retain, nonatomic) NSArray *caseSelectorsForAuditing; // ivar: _caseSelectorsForAuditing
@property (nonatomic) NSUInteger categoryType; // ivar: _categoryType
@property (retain, nonatomic) NSSet *currentAuditTypesToTestFor; // ivar: _currentAuditTypesToTestFor
@property (retain, nonatomic) AXAuditCaseResult *currentCaseResult; // ivar: _currentCaseResult
@property (weak, nonatomic) NSObject<AXAuditCategoryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *lastCaseSelectorName; // ivar: _lastCaseSelectorName
@property (nonatomic) int targetPid; // ivar: _targetPid
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)axAuditTestTypeToLocalIssueTypeMapping;
-(BOOL)_isAppleInternalBuild;
-(BOOL)localIssueShouldRun:(id)arg0 ;
-(BOOL)shouldRunAuditTestType:(id)arg0 ;
-(BOOL)supportAuditGroup:(NSUInteger)arg0 ;
-(BOOL)supportsAuditTestType:(id)arg0 ;
-(id)_availableCasesDescription;
-(id)caseStartedForSelectorName:(id)arg0 ;
-(id)description;
-(id)init;
-(id)result;
-(void)addIssueWithClassification:(NSInteger)arg0 auditElement:(id)arg1 ;
-(void)addIssueWithClassification:(NSInteger)arg0 auditElement:(id)arg1 elementRect:(struct CGRect )arg2 elementDescription:(id)arg3 ;
-(void)addIssueWithClassification:(NSInteger)arg0 auditElement:(id)arg1 elementRect:(struct CGRect )arg2 elementDescription:(id)arg3 mlGeneratedDescription:(id)arg4 ;
-(void)addIssueWithClassification:(NSInteger)arg0 auditElement:(id)arg1 elementRect:(struct CGRect )arg2 elementDescription:(id)arg3 mlGeneratedDescription:(id)arg4 longDescExtraInfo:(id)arg5 elementText:(id)arg6 ;
-(void)caseEndedForSelectorName:(id)arg0 result:(id)arg1 ;
-(void)run;
-(void)start;
-(void)stop;


@end


#endif