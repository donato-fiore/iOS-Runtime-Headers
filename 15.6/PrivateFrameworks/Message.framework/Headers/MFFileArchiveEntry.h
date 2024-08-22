// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFFILEARCHIVEENTRY_H
#define MFFILEARCHIVEENTRY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface MFFileArchiveEntry : NSObject

@property _NSRange compressedRange; // ivar: _compressedRange
@property (retain) NSData *contents; // ivar: _contents
@property BOOL isDeflated; // ivar: _isDeflated
@property BOOL isDirectory; // ivar: _isDirectory
@property (retain) NSString *path; // ivar: _path
@property NSInteger uncompressedSize; // ivar: _uncompressedSize


+(id)archiveEntry;
+(id)archiveEntryWithCentralHeader:(struct CentralHeader *)arg0 archiveData:(id)arg1 ;
-(NSInteger)compressedSize;
-(id)description;
-(id)fileName;
-(id)initWithContents:(id)arg0 path:(id)arg1 ;
-(id)initWithDirectoryPath:(id)arg0 ;
-(void)merge:(id)arg0 ;


@end


#endif