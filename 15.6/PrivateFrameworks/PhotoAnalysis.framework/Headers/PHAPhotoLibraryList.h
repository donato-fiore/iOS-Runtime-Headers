// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPHOTOLIBRARYLIST_H
#define PHAPHOTOLIBRARYLIST_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PHAPhotoLibraryList : NSObject

@property (readonly) NSUInteger count;
@property (retain) NSMutableDictionary *photoLibrariesByPath; // ivar: _photoLibrariesByPath


-(id)init;
-(void)addPhotoLibraryAtURL:(id)arg0 ;
-(void)enumeratePhotoLibrariesWithBlock:(id)arg0 ;
-(void)removeAllPhotoLibraries;
-(void)removePhotoLibraryAtURL:(id)arg0 ;
-(void)saveToPersistentStorage;


@end


#endif