// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFILESYSTEMBOOKMARK_H
#define PLFILESYSTEMBOOKMARK_H

@class NSData, NSString;


#import "PLManagedObject.h"
#import "PLInternalResource.h"

@interface PLFileSystemBookmark : PLManagedObject

@property (retain, nonatomic) NSData *bookmarkData;
@property (retain, nonatomic) NSString *pathRelativeToVolume;
@property (retain, nonatomic) PLInternalResource *resource;


+(id)entityName;
+(id)fileSystemBookmarkFromURL:(id)arg0 context:(id)arg1 ;
-(BOOL)supportsCloudUpload;
-(id)fileSystemURL;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;


@end


#endif