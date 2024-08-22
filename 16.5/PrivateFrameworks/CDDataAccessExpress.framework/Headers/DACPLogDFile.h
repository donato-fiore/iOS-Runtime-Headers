// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACPLOGDFILE_H
#define DACPLOGDFILE_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DACPLogDFile : NSObject {
    NSString *_path;
    int _fd;
    NSObject<OS_dispatch_source> *_fileEventDispatchSource;
    BOOL _fileWasDeleted;
}


@property (readonly, retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, retain, nonatomic) NSString *baseName; // ivar: _baseName
@property (readonly, retain, nonatomic) NSString *folder; // ivar: _folder


-(BOOL)logData:(id)arg0 outDidCreateNewFile:(*BOOL)arg1 outNewFilePath:(*id)arg2 ;
-(id)_filePathsMatchingPattern:(id)arg0 ;
-(id)_getLatestMatchingFilePath;
-(id)_startNewFile;
-(id)initWithFolder:(id)arg0 baseName:(id)arg1 ;
-(id)startNewFile;
-(void)_beginWatchingFile;
-(void)_closeFileWithFileEventDispatchSource:(id)arg0 ;
-(void)_openFileOutDidCreateNewFile:(*BOOL)arg0 outNewFilePath:(*id)arg1 ;
-(void)checkForMaximumFileSize:(NSInteger)arg0 wantsCompressed:(BOOL)arg1 outDidCreateNewFile:(*BOOL)arg2 outNewFilePath:(*id)arg3 ;
-(void)cullFilesMaxFileCount:(NSInteger)arg0 ;


@end


#endif