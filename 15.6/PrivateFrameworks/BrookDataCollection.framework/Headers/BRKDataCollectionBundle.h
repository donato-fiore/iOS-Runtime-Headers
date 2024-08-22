// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRKDATACOLLECTIONBUNDLE_H
#define BRKDATACOLLECTIONBUNDLE_H

@class NSMutableDictionary, NSMutableSet, BRKSettings, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BRKDataCollectionBundle : NSObject {
    NSMutableDictionary *_writers;
    NSMutableSet *_manifest;
    os_unfair_lock_s _writersLock;
    BRKSettings *_settings;
}


@property (readonly, nonatomic) NSArray *addedFiles;
@property (readonly, nonatomic) NSString *basePath; // ivar: _basePath
@property (readonly, nonatomic) NSString *folderName; // ivar: _folderName
@property (readonly, nonatomic) BOOL isPackaged; // ivar: _isPackaged


+(id)defaultLogDirectory;
-(BOOL)packageBundleToPath:(*id)arg0 filePrioritization:(id)arg1 ;
-(BOOL)removeBundle;
-(id)_writerForClass:(Class)arg0 file:(id)arg1 configuration:(id)arg2 ;
-(id)accelerationWriterForFile:(id)arg0 ;
-(id)accelerationWriterForFile:(id)arg0 valueCount:(NSUInteger)arg1 ;
-(id)audioWriterForFile:(id)arg0 ;
-(id)initWithFolderNamed:(id)arg0 ;
-(id)logWriterForFile:(id)arg0 ;
-(void)_writeData:(id)arg0 toFile:(id)arg1 updateManifest:(BOOL)arg2 ;
-(void)closeWriterForFile:(id)arg0 ;
-(void)writeData:(id)arg0 toFile:(id)arg1 ;
-(void)writeJSON:(id)arg0 toFile:(id)arg1 ;


@end


#endif