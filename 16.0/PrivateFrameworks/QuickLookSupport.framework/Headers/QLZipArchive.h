// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLZIPARCHIVE_H
#define QLZIPARCHIVE_H

@class NSURL, NSData, NSFileWrapper;

#import <Foundation/Foundation.h>


@interface QLZipArchive : NSObject {
    *archive _archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}




-(BOOL)_reopenWithError:(*id)arg0 ;
-(id)fileWrapper;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)libarchiveError;
-(id)readCurrentDataWithEntry:(struct archive_entry *)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)enumerateEntriesWithHandler:(id)arg0 ;


@end


#endif