// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVINDEXUPDATER_H
#define CKVINDEXUPDATER_H


#import <Foundation/Foundation.h>

#import "CKVIndexMaintenanceLog.h"
#import "CKVItemRecordUpdater.h"
#import "CKVFTSRecordUpdater.h"
#import "CKVSkitUpdater.h"
#import "CKVDonateRequest.h"

@interface CKVIndexUpdater : NSObject {
    CKVIndexMaintenanceLog *_maintenanceLog;
    CKVItemRecordUpdater *_itemUpdater;
    CKVFTSRecordUpdater *_ftsUpdater;
    CKVSkitUpdater *_skitUpdater;
    id *_completion;
    NSUInteger _streamedItemCount;
    NSUInteger _storedItemCount;
    NSUInteger _options;
    CKVDonateRequest *_request;
}


@property (nonatomic) BOOL updateStatus; // ivar: _updateStatus


+(BOOL)rebuildSkitWithAllVocabulary:(id)arg0 settings:(id)arg1 ;
+(id)updaterForRequest:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 timeout:(CGFloat)arg3 ;
-(BOOL)addOrUpdateItems:(id)arg0 ;
-(BOOL)finish;
-(id)initWithRequest:(id)arg0 maintenanceLog:(id)arg1 itemUpdater:(id)arg2 ftsUpdater:(id)arg3 skitUpdater:(id)arg4 completion:(id)arg5 ;
-(id)initWithRequest:(id)arg0 settings:(id)arg1 maintenanceLog:(id)arg2 database:(id)arg3 skit:(id)arg4 completion:(id)arg5 ;
-(void)_complete;
-(void)_deleteAllItems;
-(void)_deleteStaleItems;
-(void)_diffUpdateItems:(id)arg0 ;
-(void)_insertAllItems:(id)arg0 ;
-(void)_logSkitUpdate;
-(void)abort;


@end


#endif