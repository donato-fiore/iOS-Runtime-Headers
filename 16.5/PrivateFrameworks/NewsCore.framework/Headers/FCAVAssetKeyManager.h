// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCAVASSETKEYMANAGER_H
#define FCAVASSETKEYMANAGER_H

@class NFLazy, NSString;
@protocol AVContentKeySessionDelegate, FCAVAssetKeyManagerType, FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableArray.h"

@interface FCAVAssetKeyManager : NSObject <AVContentKeySessionDelegate, FCAVAssetKeyManagerType>

 {
    id<FCAVAssetKeyServiceType> *_service;
    id<FCAVAssetKeyCacheType> *_cache;
    NFLazy *_sharedContentKeySession;
    FCThreadSafeMutableArray *_fetchRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvidePersistableContentKeyRequest:(id)arg1 ;
-(void)fetchKeysWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshKeysIfNearExpiration:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerAVURLAssetForAutomaticKeyManagement:(id)arg0 ;


@end


#endif