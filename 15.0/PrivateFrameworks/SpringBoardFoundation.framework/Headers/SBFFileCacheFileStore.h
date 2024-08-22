// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFFILECACHEFILESTORE_H
#define SBFFILECACHEFILESTORE_H

@class NSString, NSURL;
@protocol SBFFileCacheStore;

#import <Foundation/Foundation.h>


@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fileCache:(id)arg0 loadFileWrapperNamed:(id)arg1 ;
-(id)fileURLForFileNamed:(id)arg0 ;
-(id)init;
-(id)initWithDirectoryURL:(id)arg0 ;
-(void)fileCache:(id)arg0 removeFileWrapperNamed:(id)arg1 ;
-(void)fileCache:(id)arg0 storeFileWrapper:(id)arg1 ;
-(void)removeAllFileWrappersForFileCache:(id)arg0 ;


@end


#endif