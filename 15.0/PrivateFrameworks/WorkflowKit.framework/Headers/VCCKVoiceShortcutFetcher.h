// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCKVOICESHORTCUTFETCHER_H
#define VCCKVOICESHORTCUTFETCHER_H

@class CKDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCCKVoiceShortcutFetcher : NSObject

@property (nonatomic) BOOL completed; // ivar: _completed
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) id *recordHandler; // ivar: _recordHandler


// -(id)initWithRecordHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)addOperation:(id)arg0 ;
-(void)fetchRecordZones;
-(void)fetchRecordsFromZone:(id)arg0 ;
-(void)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)start;


@end


#endif