// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVZIPARCHIVE_H
#define MSVZIPARCHIVE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MSVZipArchive : NSObject {
    *BOMSys _bomsys;
    NSString *_archivePath;
    NSMutableArray *_filesToArchive;
}




-(BOOL)decompressToPath:(id)arg0 withError:(*id)arg1 ;
-(BOOL)writeToFileAtPath:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithContentsOfFile:(id)arg0 ;
-(void)addFileAtPath:(id)arg0 ;
-(void)dealloc;


@end


#endif