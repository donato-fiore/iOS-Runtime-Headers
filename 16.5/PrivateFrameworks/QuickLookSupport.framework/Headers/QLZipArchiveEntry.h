// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLZIPARCHIVEENTRY_H
#define QLZIPARCHIVEENTRY_H

@class NSError, NSData, NSURL;

#import <Foundation/Foundation.h>

#import "QLZipArchive.h"

@interface QLZipArchiveEntry : NSObject {
    NSError *_error;
}


@property (weak) QLZipArchive *archive; // ivar: _archive
@property (retain) NSData *data; // ivar: _data
@property *archive_entry entry; // ivar: _entry
@property (readonly, nonatomic) NSURL *url;


-(id)readDataWithError:(*id)arg0 ;


@end


#endif