// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUCONTAINEDZIPARCHIVE_H
#define TSUCONTAINEDZIPARCHIVE_H



#import "TSUZipArchive.h"
#import "TSUZipEntry.h"

@interface TSUContainedZipArchive : TSUZipArchive {
    TSUZipArchive *_zipArchive;
    TSUZipEntry *_entry;
}




+(id)zipArchiveFromEntry:(id)arg0 zipArchive:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)isValid;
-(NSUInteger)archiveLength;
-(id)initWithEntry:(id)arg0 zipArchive:(id)arg1 options:(NSUInteger)arg2 ;
-(id)newArchiveReadChannel;
-(id)readChannelForEntry:(id)arg0 validateCRC:(BOOL)arg1 ;
-(id)streamReadChannelForEntry:(id)arg0 validateCRC:(BOOL)arg1 ;


@end


#endif