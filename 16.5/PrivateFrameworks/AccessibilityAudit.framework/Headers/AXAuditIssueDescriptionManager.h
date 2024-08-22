// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITISSUEDESCRIPTIONMANAGER_H
#define AXAUDITISSUEDESCRIPTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AXAuditIssueDescriptionManager : NSObject



+(id)_auditIssueTypeToLocalizationKeyLookup;
+(id)allAuditIssueClassificationCodes;
+(id)sharedManager;
-(BOOL)isContrastTypeIssue:(NSInteger)arg0 ;
-(id)_locKeyForAuditIssueClassification:(NSInteger)arg0 ;
-(id)_locKeyWithSuffix:(id)arg0 issueClassification:(NSInteger)arg1 ;
-(id)_locStringForIssue:(id)arg0 suffix:(id)arg1 ;
-(id)_locStringForKey:(id)arg0 ;
-(id)longDescExtraInfoForAuditIssue:(id)arg0 ;
-(id)longDescriptionForAuditIssue:(id)arg0 ;
-(id)shortTitleForAuditIssue:(id)arg0 ;
-(id)suggestionDescriptionForAuditIssue:(id)arg0 ;


@end


#endif