// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPFILESTORAGEMANAGER_H
#define TPFILESTORAGEMANAGER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPFileStorageManager : NSObject

@property (nonatomic) BOOL hasClearedLegacyStorage; // ivar: _hasClearedLegacyStorage
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSURL *urlForFileSystem; // ivar: _urlForFileSystem


+(id)sharedInstance;
-(id)imageWithName:(id)arg0 ;
-(id)init;
-(id)urlsForLegacyFileSystem;
-(void)clearLegacyStorageIfNecessary;
-(void)dealloc;
-(void)deleteStorageAtURLs:(id)arg0 ;
-(void)localeChanged;
-(void)saveImage:(id)arg0 withName:(id)arg1 ;


@end


#endif