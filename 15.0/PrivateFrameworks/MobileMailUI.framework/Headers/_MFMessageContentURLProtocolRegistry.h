// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFMESSAGECONTENTURLPROTOCOLREGISTRY_H
#define _MFMESSAGECONTENTURLPROTOCOLREGISTRY_H

@class NSLock, NSMapTable;

#import <Foundation/Foundation.h>


@interface _MFMessageContentURLProtocolRegistry : NSObject {
    NSLock *_lock;
}


@property (readonly, nonatomic) NSMapTable *storage; // ivar: _storage


+(id)sharedRegistry;
-(id)URLForLoadingContext:(id)arg0 scheme:(id)arg1 ;
-(id)init;
-(id)loadingContextForURL:(id)arg0 ;


@end


#endif