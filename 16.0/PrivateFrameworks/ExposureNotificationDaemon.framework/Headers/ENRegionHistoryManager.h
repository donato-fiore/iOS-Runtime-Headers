// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENREGIONHISTORYMANAGER_H
#define ENREGIONHISTORYMANAGER_H

@class NSString;
@protocol ENRegionHistoryManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENRegionHistory.h"
#import "ENSecureArchiveFileWrapper.h"

@interface ENRegionHistoryManager : NSObject

@property (weak, nonatomic) NSObject<ENRegionHistoryManagerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *directoryPath; // ivar: _directoryPath
@property (nonatomic) NSInteger fileStatus; // ivar: _fileStatus
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) ENRegionHistory *regionHistory; // ivar: _regionHistory
@property (retain, nonatomic) ENSecureArchiveFileWrapper *regionHistoryFileWrapper; // ivar: _regionHistoryFileWrapper
@property (nonatomic) int resetToken; // ivar: _resetToken


+(id)regionHistoryFileStatusToString:(NSInteger)arg0 ;
-(BOOL)purgeAllRegionHistoryWithError:(*id)arg0 ;
-(BOOL)purgeRegionsOlderThanDate:(id)arg0 error:(*id)arg1 ;
-(id)getAllRegionVisits;
-(id)getAllRegions;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 directoryPath:(id)arg2 ;
-(id)mergeRegionHistoryOnDisk:(id)arg0 inMemory:(id)arg1 ;
-(void)addRegionVisit:(id)arg0 ;
-(void)dealloc;
-(void)setupPersistedRegionHistory;
-(void)updateFileStatus;


@end


#endif