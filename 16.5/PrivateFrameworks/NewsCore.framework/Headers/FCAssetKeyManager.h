// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCASSETKEYMANAGER_H
#define FCASSETKEYMANAGER_H

@class NSString;
@protocol FCOperationThrottlerDelegate, FCAssetKeyManagerType, FCAssetKeyServiceType, FCAssetKeyCacheType, FCAssetKeyManagerDelegate, FCOperationThrottler;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableSet.h"
#import "FCThreadSafeMutableDictionary.h"

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType>

 {
    id<FCAssetKeyServiceType> *_service;
    id<FCAssetKeyCacheType> *_cache;
    id<FCAssetKeyManagerDelegate> *_delegate;
    id<FCOperationThrottler> *_throttler;
    FCThreadSafeMutableSet *_pendingWrappingKeyIDs;
    FCThreadSafeMutableDictionary *_errorsByKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cachedWrappingKeyWithID:(id)arg0 ;
-(void)clearUnauthorizedAssetKeys;
-(void)eraseAllKeys;
-(void)fetchWrappingKeyWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;


@end


#endif