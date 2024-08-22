// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENFILESESSIONDAEMON_H
#define ENFILESESSIONDAEMON_H

@class ENArchive, NSArray, ENFile;
@protocol OS_xpc_object, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface ENFileSessionDaemon : NSObject {
    ENArchive *_archive;
    NSObject<OS_xpc_object> *_nextTEKBatch;
    NSArray *_signatures;
    NSObject<OS_os_transaction> *_transaction;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, nonatomic) ENFile *file; // ivar: _file
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) NSUInteger invalidKeyCount; // ivar: _invalidKeyCount


-(BOOL)_resetAndAdvanceArchive:(id)arg0 toPathWithExtension:(id)arg1 error:(*id)arg2 ;
-(BOOL)activateWithArchiveFD:(int)arg0 error:(*id)arg1 ;
-(BOOL)activateWithFileFD:(int)arg0 signatureData:(id)arg1 error:(*id)arg2 ;
-(id)_readTEKBatchAndReturnError:(*id)arg0 ;
-(id)init;
-(id)readSignaturesAndReturnError:(*id)arg0 ;
-(id)readTEKBatchAndReturnError:(*id)arg0 ;
-(void)_createTransaction;
-(void)dealloc;
-(void)invalidate;
-(void)prepareNextTEKBatchIfNecessary;


@end


#endif