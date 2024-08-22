// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTALERTSTATETESTER_H
#define BLTALERTSTATETESTER_H


#import <Foundation/Foundation.h>


@interface BLTAlertStateTester : NSObject

@property (copy, nonatomic) id *sectionInfoRetriever; // ivar: _sectionInfoRetriever
@property BOOL testCheckedSubsections; // ivar: _testCheckedSubsections


-(BOOL)isScreenTimeBlockedForBundleIdentifier:(id)arg0 ignoresDowntime:(BOOL)arg1 ;
-(NSUInteger)_blockingReasonForSectionInfo:(id)arg0 isCritical:(BOOL)arg1 ;
-(NSUInteger)willNanoPresentNotificationForSectionInfo:(id)arg0 subsectionIDs:(id)arg1 isWristDetectDisabled:(BOOL)arg2 hasSectionIDOptedOutOfCoordination:(BOOL)arg3 hasSectionIDOptedForwardOnly:(BOOL)arg4 ignoresDowntime:(BOOL)arg5 isCritical:(BOOL)arg6 ;


@end


#endif