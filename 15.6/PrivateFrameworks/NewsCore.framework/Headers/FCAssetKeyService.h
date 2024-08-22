// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCASSETKEYSERVICE_H
#define FCASSETKEYSERVICE_H

@class NFLazy, NFPromise;
@protocol FCAssetKeyServiceType;

#import <Foundation/Foundation.h>


@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType>

 {
    NFLazy *_session;
    NFLazy *_requestEncoder;
    NFPromise *_endpointURLPromise;
}




-(void)fetchWrappingKeysWithIDs:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif