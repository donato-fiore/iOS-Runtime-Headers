// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSLASTCOMMUNICATEDFEATURES_H
#define _PSLASTCOMMUNICATEDFEATURES_H


#import <Foundation/Foundation.h>


@interface _PSLastCommunicatedFeatures : NSObject



+(CGFloat)timeIntervalSinceNowForInteraction:(id)arg0 ;
+(NSInteger)countMatchingRecipientsForInteraction:(id)arg0 recipientIdentifierSet:(id)arg1 recipientPersonIdSet:(id)arg2 ;
+(id)featureValueFromTimeInterval:(CGFloat)arg0 ;
+(id)findCandidateInteractionInCaches:(id)arg0 caches:(id)arg1 direction:(id)arg2 mechanisms:(id)arg3 ;
+(id)lastCommunicationFromCandidates:(id)arg0 direction:(id)arg1 mechanisms:(id)arg2 caches:(id)arg3 ;
+(id)lastInteractionFromCandidate:(id)arg0 caches:(id)arg1 direction:(id)arg2 mechanisms:(id)arg3 ;
+(id)recipientDetailsFromContact:(id)arg0 ;
+(int)bucketFromTimeInterval:(CGFloat)arg0 ;


@end


#endif