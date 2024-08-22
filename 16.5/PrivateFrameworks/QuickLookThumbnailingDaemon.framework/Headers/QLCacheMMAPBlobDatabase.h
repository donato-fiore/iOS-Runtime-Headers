// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEMMAPBLOBDATABASE_H
#define QLCACHEMMAPBLOBDATABASE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "QLCacheFragHandler.h"
#import "_QLCacheThread.h"

@interface QLCacheMMAPBlobDatabase : NSObject {
    NSString *_path;
    QLCacheFragHandler *_fragHandler;
    int _file;
    *void _vmFile;
    NSMutableArray *_reservedBuffers;
}


@property (weak) _QLCacheThread *cacheThread; // ivar: _cacheThread
@property (readonly) float fragmentation;
@property (readonly) NSUInteger maxSize; // ivar: _maxSize
@property (readonly) NSUInteger size;


-(*void)bufferPointedToByBlobInfo:(id)arg0 ;
-(BOOL)deleteBlobWithInfo:(id)arg0 ;
-(BOOL)deleteBlobsWithArray:(id)arg0 ;
-(BOOL)doesExist;
-(BOOL)isOpen;
-(BOOL)isValid;
-(id)cacheHolesOrderedByStart;
-(id)checkConsistency:(id)arg0 ;
-(id)copyBlobWithInfo:(id)arg0 ;
-(id)initWithPath:(id)arg0 cacheSize:(NSInteger)arg1 cacheThread:(id)arg2 ;
-(id)reserveBufferWithLength:(NSUInteger)arg0 ;
-(void)close;
-(void)compactFragmentation;
-(void)discardReservedBufferWithBlobInfo:(id)arg0 ;
-(void)open;
-(void)reset;
-(void)save;
-(void)validateReservedBufferWithBlobInfo:(id)arg0 ;


@end


#endif