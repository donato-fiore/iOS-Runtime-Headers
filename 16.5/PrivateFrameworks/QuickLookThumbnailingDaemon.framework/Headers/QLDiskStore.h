// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDISKSTORE_H
#define QLDISKSTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLDiskStore : NSObject {
    NSObject<OS_dispatch_queue> *_afterInit;
}


@property (readonly) BOOL acceptsThumbnails;
@property (readonly) NSUInteger availableDiskSpace;
@property unsigned char disableCache; // ivar: _disableCache
@property unsigned char disableQuickLook; // ivar: _disableQuickLook
@property (readonly) BOOL distant;
@property (readonly) BOOL encrypted; // ivar: _encrypted
@property statfs fs_stat; // ivar: _fs_stat
@property (readonly) BOOL hasThumbnailCache;
@property (nonatomic) BOOL isExternalEncrypted; // ivar: _isExternalEncrypted
@property (readonly) char * mountPath;


+(id)diskStoreForURL:(id)arg0 ;
+(id)diskStores;
-(id)description;
-(id)initWithURL:(id)arg0 ;
// -(void)executeBlock:(id)arg0 onQueue:(unk)arg1  ;


@end


#endif