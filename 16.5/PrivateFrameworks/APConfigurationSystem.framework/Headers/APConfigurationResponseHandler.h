// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONFIGURATIONRESPONSEHANDLER_H
#define APCONFIGURATIONRESPONSEHANDLER_H

@class NSFileManager, NSString;

#import <Foundation/Foundation.h>


@interface APConfigurationResponseHandler : NSObject

@property (readonly, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) NSString *pathToConfig; // ivar: _pathToConfig
@property (readonly, nonatomic) NSString *pathToTempDir; // ivar: _pathToTempDir
@property (readonly, nonatomic) NSString *pathToTraverse; // ivar: _pathToTraverse


-(BOOL)_copyCurrentConfigToTraverse;
-(BOOL)_createTempDirectory;
-(BOOL)_removeTempDirectory;
-(BOOL)_replaceConfigWithNewHierarchy;
-(BOOL)_writeCompressedFileWithData:(id)arg0 atPath:(id)arg1 ;
-(NSInteger)processResponseWithData:(id)arg0 ;
-(id)_tempConfigPath;
-(id)init;


@end


#endif