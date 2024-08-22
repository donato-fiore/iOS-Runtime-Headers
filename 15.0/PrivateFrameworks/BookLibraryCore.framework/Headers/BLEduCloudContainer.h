// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLEDUCLOUDCONTAINER_H
#define BLEDUCLOUDCONTAINER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLEduCloudContainer : NSObject

@property (retain, nonatomic) id *cloudToken; // ivar: _cloudToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue; // ivar: _containerQueue
@property (retain, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, nonatomic) NSURL *documentsURL; // ivar: _documentsURL


+(id)sharedEduCloudContainer;
-(BOOL)_addOrUpdateCloudEntryWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_coordinatedReadOfPromisesWithError:(*id)arg0 ;
-(BOOL)_writePlist:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)addBookItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)isSignedIn;
-(BOOL)removeBookItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateBookItem:(id)arg0 error:(*id)arg1 ;
-(id)allBookItems;
-(id)bookItemForPermlink:(id)arg0 ;
-(id)bookItemForURL:(id)arg0 ;
-(id)bookItemsForPermlinks:(id)arg0 ;
-(id)cloudUrlForPermlink:(id)arg0 ;
-(id)dictionaryAsBookItem:(id)arg0 path:(id)arg1 ;
-(id)fileNameForPermlink:(id)arg0 ;
-(id)init;
-(id)performMetadataActionOnCloudURL:(id)arg0 action:(id)arg1 ;


@end


#endif