// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIAQUOTAMANAGER_H
#define NMSMEDIAQUOTAMANAGER_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "NMSMutableMediaDownloadInfo.h"

@interface NMSMediaQuotaManager : NSObject {
    NSMutableDictionary *_itemEnumerators;
    NSDictionary *_estimatedItemSizes;
    NSUInteger _quota;
    NMSMutableMediaDownloadInfo *_downloadInfoWithinQuota;
    NSDictionary *_downloadInfoWithinQuotaForIdentifiers;
    BOOL _hasEvaluated;
    BOOL _legacy_musicDidSkipItem;
}




-(BOOL)_legacy_musicDidSkipItem;
-(id)_newMutableItemEnumeratorDict;
-(id)downloadInfoWithinQuota;
-(id)downloadInfoWithinQuotaForBundleIdentifier:(id)arg0 ;
-(id)initWithItemEnumerators:(id)arg0 estimatedItemSizes:(id)arg1 quota:(NSUInteger)arg2 ;
-(void)_evaluateAddedItemsIfNecessary;


@end


#endif