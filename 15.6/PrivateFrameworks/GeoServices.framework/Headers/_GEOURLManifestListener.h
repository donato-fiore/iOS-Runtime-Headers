// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOURLMANIFESTLISTENER_H
#define _GEOURLMANIFESTLISTENER_H

@class NSMutableArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _GEOURLManifestListener : NSObject {
    NSMutableArray *_handlers;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}




+(id)sharedListener;
-(id)init;
-(void)_finish:(BOOL)arg0 ;
-(void)waitForManifestWithCallback:(id)arg0 ;


@end


#endif