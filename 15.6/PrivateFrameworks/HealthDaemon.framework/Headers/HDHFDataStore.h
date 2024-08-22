// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHFDATASTORE_H
#define HDHFDATASTORE_H

@class NSString;
@protocol OS_dispatch_queue, HDHFDataStoreDelegate;

#import <Foundation/Foundation.h>


@interface HDHFDataStore : NSObject {
    shared_ptr<health::VirtualFilesystem> _fileSystem;
    os_unfair_lock_s _lock;
    shared_ptr<health::DataStore> _highFrequencyDataStore;
    uint8_t _invalidated;
    uint8_t _hasOpenStore;
    NSObject<OS_dispatch_queue> *_openQueue;
    NSInteger _openAttempt;
}


@property (weak, nonatomic) NSObject<HDHFDataStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *fileSystemPath; // ivar: _fileSystemPath
@property (nonatomic) BOOL isOpen; // ivar: _isOpen
@property (readonly, nonatomic) NSInteger rebuildState;


-(BOOL)accessStoreWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)deleteHFDAt:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardStoreWithError:(*id)arg0 ;
-(BOOL)moveHFDAsideWithoutOverwritingFrom:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)diagnosticDescription;
-(id)fileManager;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 fileSystem:(struct shared_ptr<health::VirtualFilesystem> )arg1 ;
-(struct unique_ptr<health::DataStore, std::default_delete<health::DataStore>> )dataStoreAtURL:(id)arg0 filesystem:(*void)arg1 allowCheckpoint:(BOOL)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)flushForInvalidation:(BOOL)arg0 ;
-(void)unitTest_requestMigrationToSQLite;
-(void)unitTest_requestRebuild;


@end


#endif