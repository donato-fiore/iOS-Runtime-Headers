// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATEDOCUMENTATIONMANAGER_H
#define HMSOFTWAREUPDATEDOCUMENTATIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol HMFLogging, HMSoftwareUpdateDocumentationAssetDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMSoftwareUpdateDocumentationManager : NSObject <HMFLogging, HMSoftwareUpdateDocumentationAssetDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) NSMutableDictionary *assetCompletionPairByDigestUUID; // ivar: _assetCompletionPairByDigestUUID
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)assetForDocumentationMetadata:(id)arg0 ;
-(id)assetForMetadataFromDisk:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)addAssetAndCompletion:(id)arg0 completion:(id)arg1 ;
-(void)didUpdateDocumentationAssetState:(id)arg0 ;
-(void)documentationForMetadata:(id)arg0 completion:(id)arg1 ;
-(void)removeAssetAndCompletion:(id)arg0 ;
-(void)removeDocumentationMetadata:(id)arg0 ;


@end


#endif