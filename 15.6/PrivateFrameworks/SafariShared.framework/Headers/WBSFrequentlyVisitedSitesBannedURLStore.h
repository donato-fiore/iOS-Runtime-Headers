// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFREQUENTLYVISITEDSITESBANNEDURLSTORE_H
#define WBSFREQUENTLYVISITEDSITESBANNEDURLSTORE_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_storeQueue;
    NSMutableDictionary *_bannedURLStringsToEntriesMap;
}




-(BOOL)containsURLString:(id)arg0 ;
-(id)_bannedURLStringsToEntriesMap;
-(id)initWithStoreURL:(id)arg0 history:(id)arg1 ;
-(id)urlStrings;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)_historyWasCleared:(id)arg0 ;
-(void)_writeOutBannedURLStringsAsynchronously;
-(void)addURLString:(id)arg0 ;
-(void)dealloc;
-(void)removeAllURLStrings;
-(void)removeURLStrings:(id)arg0 ;


@end


#endif