// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PULOADINGSTATUSMANAGER_H
#define PULOADINGSTATUSMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSMapTable;
@protocol PULoadingStatusManagerDelegate;

#import <Foundation/Foundation.h>


@interface PULoadingStatusManager : NSObject {
    ? _delegateFlags;
}


@property (readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems; // ivar: __invalidLoadingStatusItems
@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled; // ivar: __isUpdateScheduled
@property (readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID; // ivar: __itemByLoadOperationTrackingID
@property (readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem; // ivar: __loadOperationTrackingIDsByItem
@property (readonly, nonatomic) NSMapTable *_loadingStatusByItem; // ivar: __loadingStatusByItem
@property (readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID; // ivar: __loadingStatusByLoadOperationTrackingID
@property (weak, nonatomic) NSObject<PULoadingStatusManagerDelegate> *delegate; // ivar: _delegate


-(BOOL)_needsUpdate;
-(id)init;
-(id)loadingStatusForItem:(id)arg0 ;
-(id)willBeginLoadOperationWithItem:(id)arg0 ;
-(void)_invalidateLoadingStatusForItem:(id)arg0 ;
-(void)_resetLoadingStatusForItemIfAppropriate:(id)arg0 ;
-(void)_setLoadingStatus:(id)arg0 forItem:(id)arg1 ;
-(void)_setLoadingStatus:(id)arg0 forLoadOperationTrackingID:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateLoadingStatusForItem:(id)arg0 ;
-(void)_updateLoadingStatusForItemIfNeeded:(id)arg0 ;
-(void)_updateLoadingStatusForItemsIfNeeded;
-(void)_updateNowIfNeeded;
-(void)didCancelLoadOperationWithTrackingID:(id)arg0 ;
-(void)didCompleteLoadOperationWithTrackingID:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)didUpdateLoadOperationWithTrackingID:(id)arg0 withProgress:(CGFloat)arg1 ;


@end


#endif