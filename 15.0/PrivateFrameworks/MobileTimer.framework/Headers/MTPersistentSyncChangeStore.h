// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPERSISTENTSYNCCHANGESTORE_H
#define MTPERSISTENTSYNCCHANGESTORE_H

@class NSString;
@protocol MTSyncChangeStore, NAScheduler;

#import <Foundation/Foundation.h>


@interface MTPersistentSyncChangeStore : NSObject <MTSyncChangeStore>



@property (readonly, nonatomic) NSObject<NAScheduler> *archiverScheduler; // ivar: _archiverScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *syncDataFile; // ivar: _syncDataFile
@property (copy, nonatomic) NSString *syncDataPath; // ivar: _syncDataPath


-(id)initWithDataModel:(id)arg0 ;
-(id)loadChanges;
-(void)_removeSyncDataFile;
-(void)persistChanges:(id)arg0 ;
-(void)setupSyncDataFileForDataModel:(id)arg0 ;


@end


#endif