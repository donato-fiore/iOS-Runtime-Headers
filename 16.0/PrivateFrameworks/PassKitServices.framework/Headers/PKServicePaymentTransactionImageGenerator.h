// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSERVICEPAYMENTTRANSACTIONIMAGEGENERATOR_H
#define PKSERVICEPAYMENTTRANSACTIONIMAGEGENERATOR_H

@class NSXPCConnection, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PKServicePaymentTransactionImageGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    NSMutableDictionary *_mappedFilesIndices;
    NSMutableDictionary *_keysHitCounts;
    ? _mappedFiles;
    NSString *_nextKeyToEvict;
    NSUInteger _evictionHitCount;
    os_unfair_lock_s _lock;
    BOOL _hasSetupTempDir;
}




-(NSUInteger)_nextIndexToUseAndEvictIfNeeded;
-(id)cachedImageDataForKey:(id)arg0 ;
-(id)connectionToService;
-(id)init;
-(void)_cleanMappedFile:(struct ? )arg0 ;
-(void)_updateNextKeyToEvict;
-(void)dealloc;
-(void)imageDataForTransaction:(id)arg0 size:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)setCachedImageData:(id)arg0 forKey:(id)arg1 ;


@end


#endif