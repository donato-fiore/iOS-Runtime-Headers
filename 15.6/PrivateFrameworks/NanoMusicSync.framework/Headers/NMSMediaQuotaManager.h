// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIAQUOTAMANAGER_H
#define NMSMEDIAQUOTAMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "NMSMediaDownloadInfo.h"

@interface NMSMediaQuotaManager : NSObject {
    NSDictionary *_groupIterators;
    NSUInteger _quota;
    NMSMediaDownloadInfo *_downloadInfoWithinQuota;
    NSUInteger _quotaUsage;
    BOOL _hasEvaluated;
}




-(BOOL)isItemGroupWithinQuota:(id)arg0 ;
-(NSUInteger)sizeOfItemsWithinQuota;
-(NSUInteger)sizeOfItemsWithinQuotaForBundleIdentifier:(id)arg0 ;
-(NSUInteger)sizeOfNominatedItemsForBundleIdentifier:(id)arg0 ;
-(id)_containerListForBundleIdentifier:(id)arg0 ;
-(id)downloadInfoWithinQuota;
-(id)downloadInfoWithinQuotaForBundleIdentifier:(id)arg0 ;
-(id)groupIteratorForBundleIdentifier:(id)arg0 ;
-(id)initWithGroupIterators:(id)arg0 quota:(NSUInteger)arg1 ;
-(void)_evaluateAddedItemsIfNecessary;


@end


#endif