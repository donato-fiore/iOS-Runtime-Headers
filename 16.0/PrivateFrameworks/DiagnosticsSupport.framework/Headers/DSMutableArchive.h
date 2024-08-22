// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSMUTABLEARCHIVE_H
#define DSMUTABLEARCHIVE_H

@class NSMutableData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface DSMutableArchive : NSObject

@property (retain, nonatomic) NSMutableData *dataBuffer; // ivar: _dataBuffer
@property (nonatomic) NSInteger format; // ivar: _format
@property (retain, nonatomic) NSMutableArray *tableOfContents; // ivar: _tableOfContents


+(BOOL)extractArchive:(id)arg0 toDirectory:(id)arg1 ;
+(BOOL)extractEntry:(struct archive *)arg0 toArchive:(struct archive *)arg1 ;
+(id)archive;
-(BOOL)_addDirectoryToContents:(id)arg0 searchQueue:(id)arg1 flatten:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_addFile:(id)arg0 archive:(struct archive *)arg1 error:(*id)arg2 ;
-(BOOL)_addPathToContents:(id)arg0 searchQueue:(id)arg1 flatten:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_writeArchive:(struct archive *)arg0 error:(*id)arg1 ;
-(BOOL)addURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)addURL:(id)arg0 prefix:(id)arg1 error:(*id)arg2 ;
-(BOOL)addURL:(id)arg0 prefix:(id)arg1 flatten:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)archiveAsFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)archiveAsFileUsingDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)archiveAsDataWithError:(*id)arg0 ;
-(id)archiveAsTempDirectoryWithName:(id)arg0 error:(*id)arg1 ;
-(id)archiveAsTempFileWithTemplate:(id)arg0 directory:(id)arg1 suffix:(id)arg2 error:(*id)arg3 ;
-(id)archiveAsTempFileWithTemplate:(id)arg0 error:(*id)arg1 ;
-(id)archiveAsTempFileWithTemplate:(id)arg0 suffix:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif