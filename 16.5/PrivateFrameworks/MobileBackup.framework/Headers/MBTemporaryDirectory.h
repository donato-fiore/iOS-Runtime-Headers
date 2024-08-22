// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBTEMPORARYDIRECTORY_H
#define MBTEMPORARYDIRECTORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MBTemporaryDirectory : NSObject {
    NSString *_identifier;
    NSString *_path;
    char * _fsRepPath;
    BOOL _disposed;
}


@property (readonly, nonatomic) NSString *path;


+(id)temporaryDirectoryOnSameVolumeAsPath:(id)arg0 identifiedBy:(id)arg1 error:(*id)arg2 ;
-(BOOL)_purgeContentsAt:(id)arg0 ;
-(BOOL)dispose;
-(BOOL)purgeContents;
-(id)_initWithExistingFsRepPath:(char *)arg0 identifier:(id)arg1 ;
-(id)description;
-(id)makeTemporaryFilePath;
-(void)dealloc;


@end


#endif