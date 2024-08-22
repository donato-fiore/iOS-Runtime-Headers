// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEOSOURCETOKENMANAGER_H
#define VCVIDEOSOURCETOKENMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCVideoSourceTokenManager.h"

@interface VCVideoSourceTokenManager : NSObject {
    VCVideoSourceTokenManager *_tokenManager;
    NSMutableDictionary *_videoSourceTokens;
    NSMutableDictionary *_sourceNames;
    NSUInteger _identifierSeeds;
    NSObject<OS_dispatch_queue> *_tokenManagerQueue;
}




+(id)sharedManager;
-(id)deviceNameForToken:(struct _VCVideoSourceToken )arg0 ;
-(id)init;
-(struct _VCVideoSourceToken )createtokenForDeviceName:(id)arg0 sourceType:(int)arg1 ;
-(struct _VCVideoSourceToken )tokenForDeviceName:(id)arg0 sourceType:(int)arg1 ;
-(void)dealloc;


@end


#endif