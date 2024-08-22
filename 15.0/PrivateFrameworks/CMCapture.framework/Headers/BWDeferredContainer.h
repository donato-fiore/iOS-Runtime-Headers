// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDCONTAINER_H
#define BWDEFERREDCONTAINER_H

@class NSURL, NSString, NSMutableArray, NSArray, NSDictionary;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>

#import "BWStillImageCaptureSettings.h"
#import "FigCaptureStillImageSettings.h"

@interface BWDeferredContainer : NSObject {
    NSInteger _creationTimeNS;
    _opaque_pthread_rwlock_t _lock;
    NSObject<OS_os_transaction> *_transaction;
    NSURL *_baseFolderURL;
    NSString *_applicationID;
    NSMutableArray *_intermediates;
    NSMutableArray *_photoDescriptors;
}


@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSArray *bufferAttributes; // ivar: _bufferAttributes
@property (readonly, nonatomic) NSString *captureRequestIdentifier; // ivar: _captureRequestIdentifier
@property (readonly, nonatomic) NSUInteger captureRequestIdentifierBytesHigh;
@property (readonly, nonatomic) NSUInteger captureRequestIdentifierBytesLow;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings; // ivar: _stillImageCaptureSettings
@property (readonly, nonatomic) NSArray *intermediates;
@property (readonly, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) NSInteger manifestVersion; // ivar: _manifestVersion
@property (readonly, nonatomic) unsigned int processingType;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings; // ivar: _stillImageSettings


+(BOOL)archiveObjectWithURL:(id)arg0 object:(id)arg1 error:(*id)arg2 ;
+(id)archiveObject:(id)arg0 error:(*id)arg1 ;
+(id)buildArchiveClasses:(id)arg0 ;
+(id)manifestDictionaryForCaptureRequestIdentifier:(id)arg0 photoDescriptors:(id)arg1 ;
+(id)manifestDictionaryForURL:(id)arg0 err:(*int)arg1 ;
+(id)unarchiveObject:(id)arg0 classes:(id)arg1 error:(*id)arg2 ;
+(id)unarchiveObjectWithURL:(id)arg0 classes:(id)arg1 error:(*id)arg2 ;
+(int)validateManifestURLSize:(id)arg0 ;
+(void)initialize;
-(BOOL)hasTag:(id)arg0 ;
-(BOOL)valid:(*int)arg0 ;
-(id)description;
-(id)init;
-(id)initWithApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 baseFolderURL:(id)arg2 queuePriority:(unsigned int)arg3 err:(*int)arg4 ;
-(void)dealloc;


@end


#endif