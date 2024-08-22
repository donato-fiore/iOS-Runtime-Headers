// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFFILECACHEMEMORYSTORE_H
#define SBFFILECACHEMEMORYSTORE_H

@class NSMutableDictionary, NSString;
@protocol SBFFileCacheStore;

#import <Foundation/Foundation.h>


@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore>

 {
    NSMutableDictionary *_fileWrappers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fileCache:(id)arg0 loadFileWrapperNamed:(id)arg1 ;
-(void)fileCache:(id)arg0 removeFileWrapperNamed:(id)arg1 ;
-(void)fileCache:(id)arg0 storeFileWrapper:(id)arg1 ;
-(void)removeAllFileWrappersForFileCache:(id)arg0 ;


@end


#endif