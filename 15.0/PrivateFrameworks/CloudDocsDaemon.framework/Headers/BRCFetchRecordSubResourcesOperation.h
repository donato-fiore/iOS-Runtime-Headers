// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFETCHRECORDSUBRESOURCESOPERATION_H
#define BRCFETCHRECORDSUBRESOURCESOPERATION_H

@class BRCOperation, NSMutableArray, NSString, NSError, NSDictionary;
@protocol BRCOperationSubclass, OS_dispatch_group, OS_dispatch_source;


#import "BRCServerZone.h"

@interface BRCFetchRecordSubResourcesOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCServerZone *_serverZone;
    NSMutableArray *_recordsWithXattrsToFetch;
    NSObject<OS_dispatch_group> *_recordsBeingFetchedGroup;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    BOOL _isDoneFetchingRecords;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *recordsByID; // ivar: _recordsByID
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg0 ;
-(void)_scheduleXattrFetch;
-(void)addRecord:(id)arg0 ;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)removeAllRecords;
-(void)removeRecordByID:(id)arg0 ;
-(void)startWithParentOperation:(id)arg0 ;
-(void)stop;
-(void)stopWithError:(id)arg0 ;
-(void)waitUntilRecordsAreFetched;


@end


#endif