// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BUZIPFILEARCHIVE_H
#define BUZIPFILEARCHIVE_H

@class NSURL;
@protocol OS_dispatch_queue;


#import "BUZipArchive.h"
#import "BUZipFileDescriptorWrapper.h"

@interface BUZipFileArchive : BUZipArchive {
    NSUInteger _archiveLength;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) BUZipFileDescriptorWrapper *fdWrapper; // ivar: _fdWrapper
@property (retain, nonatomic) NSURL *temporaryDirectoryURL; // ivar: _temporaryDirectoryURL


+(BOOL)extractArchiveFromURL:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)isZipArchiveAtFD:(int)arg0 ;
+(BOOL)isZipArchiveAtURL:(id)arg0 error:(*id)arg1 ;
+(id)zipArchiveFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)readArchiveFromURL:(id)arg0 options:(NSUInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid;
-(BOOL)openWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)reopenWithTemporaryURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)archiveLength;
-(id)debugDescription;
-(id)initForReadingFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithWriter:(id)arg0 forReadingFromURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)newArchiveReadChannel;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg0 ;
-(void)dealloc;
-(void)removeTemporaryDirectory;


@end


#endif