// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCAVASSETKEYSERVICE_H
#define FCAVASSETKEYSERVICE_H

@class NFLazy, NFPromise;
@protocol FCAVAssetKeyServiceType;

#import <Foundation/Foundation.h>


@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType>

 {
    NFLazy *_session;
    NFLazy *_requestEncoder;
    NFPromise *_fairPlayBaseURLPromise;
}




-(id)init;
-(void)fetchAppCertificateWithCompletionHandler:(id)arg0 ;
-(void)fetchContentKeyWithURI:(id)arg0 spcData:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif