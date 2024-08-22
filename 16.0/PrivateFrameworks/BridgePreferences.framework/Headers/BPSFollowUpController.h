// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSFOLLOWUPCONTROLLER_H
#define BPSFOLLOWUPCONTROLLER_H


#import <Foundation/Foundation.h>


@interface BPSFollowUpController : NSObject



+(id)_currentDevice;
+(id)_domainAccessorForDevice:(id)arg0 ;
+(id)baseDomainIdentifier;
+(id)skippedSetupPaneClassesForCurrentDevice;
+(id)skippedSetupPaneClassesForDevice:(id)arg0 ;
+(void)addFollowUpForIdentifier:(id)arg0 withAttributes:(id)arg1 withCompletion:(id)arg2 ;
+(void)markSkippedSetupPaneClass:(Class)arg0 forDevice:(id)arg1 ;
+(void)markSkippedSetupPaneClassForCurrentDevice:(Class)arg0 ;
+(void)removeFollowUpForIdentifier:(id)arg0 withCompletion:(id)arg1 ;
+(void)removeSkippedPaneClass:(Class)arg0 forDevice:(id)arg1 ;
+(void)removeSkippedPaneClassForCurrentDevice:(Class)arg0 ;


@end


#endif