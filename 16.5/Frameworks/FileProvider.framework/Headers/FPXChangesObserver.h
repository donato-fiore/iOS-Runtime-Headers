// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPXCHANGESOBSERVER_H
#define FPXCHANGESOBSERVER_H

@class NSMutableArray, NSData, NSString;
@protocol NSFileProviderChangeObserver;


#import "FPXObserver.h"

@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver>

 {
    NSMutableArray *_changedItems;
    NSMutableArray *_deletedItemIDs;
    NSData *_originalSyncAnchor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *finishedBlock; // ivar: _finishedBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger suggestedBatchSize; // ivar: _suggestedBatchSize
@property (readonly) Class superclass;


-(id)initWithObservedItemID:(id)arg0 domainContext:(id)arg1 nsFileProviderRequest:(id)arg2 ;
-(id)initWithObservedItemID:(id)arg0 domainContext:(id)arg1 previousChangeToken:(id)arg2 nsFileProviderRequest:(id)arg3 ;
-(void)didDeleteItemsWithIdentifiers:(id)arg0 ;
-(void)didUpdateItems:(id)arg0 ;
-(void)finishEnumeratingChangesUpToSyncAnchor:(id)arg0 moreComing:(BOOL)arg1 ;
-(void)finishEnumeratingWithError:(id)arg0 ;


@end


#endif