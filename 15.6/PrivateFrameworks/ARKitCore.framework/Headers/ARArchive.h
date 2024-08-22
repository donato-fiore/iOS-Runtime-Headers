// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARARCHIVE_H
#define ARARCHIVE_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface ARArchive : NSObject {
    NSMutableDictionary *_dataByPath;
}


@property (readonly, copy, nonatomic) NSArray *filePaths;


-(BOOL)_loadArchiveFromMemory:(id)arg0 error:(*id)arg1 ;
-(BOOL)_loadArchiveFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readDataForEntry:(struct archive_entry *)arg0 archive:(struct archive *)arg1 ;
-(BOOL)_readDataFromArchive:(struct archive *)arg0 ;
-(BOOL)_writeToArchive:(struct archive *)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)dataForResource:(id)arg0 withExtension:(id)arg1 ;
-(id)dataForResourceAtPath:(id)arg0 ;
-(id)dataRepresentation;
-(id)init;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(struct archive *)_createArchiveForReading;
-(void)addData:(id)arg0 withFilename:(id)arg1 extension:(id)arg2 ;
-(void)addData:(id)arg0 withPath:(id)arg1 ;


@end


#endif