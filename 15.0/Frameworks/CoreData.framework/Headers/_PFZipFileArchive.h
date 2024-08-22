// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFZIPFILEARCHIVE_H
#define _PFZIPFILEARCHIVE_H

@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PFZipEndOfCentralDirectoryRecord.h"

@interface _PFZipFileArchive : NSObject {
    NSDictionary *_contents;
    NSData *_data;
    id *_provider;
    NSInteger _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    __zFlags _zFlags;
    NSMutableDictionary *_entryNameToData;
    NSMutableDictionary *_entryNameToLocalFileHeader;
    NSMutableDictionary *_entryNameToCentralDirectoryFileHeader;
    NSMutableArray *_localFileHeaders;
    NSMutableArray *_centralDirectoryEntries;
    PFZipEndOfCentralDirectoryRecord *_endRecord;
}




-(id)init;
-(void)dealloc;


@end


#endif