// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEHANDLE_H
#define NTKAPPLEENCRYPTEDARCHIVEHANDLE_H

@class NSURL, NSData;

#import <Foundation/Foundation.h>


@interface NTKAppleEncryptedArchiveHandle : NSObject {
    *AAByteStream_impl _encryptedStream;
    *AEAContext_impl _context;
    *AAByteStream_impl _decryptedStream;
    *AAArchiveStream_impl _archiveStream;
}


@property (copy) id *archiveEntryEvent; // ivar: _archiveEntryEvent
@property (readonly, copy) NSURL *archiveURL; // ivar: _archiveURL
@property (readonly, copy) NSData *symmetricKey; // ivar: _symmetricKey


-(BOOL)closeReturningError:(*id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 ;
-(struct AAArchiveStream_impl *)openReturningError:(*id)arg0 ;
-(void)dealloc;


@end


#endif