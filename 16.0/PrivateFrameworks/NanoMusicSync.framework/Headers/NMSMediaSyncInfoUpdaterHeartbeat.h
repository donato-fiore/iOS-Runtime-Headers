// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIASYNCINFOUPDATERHEARTBEAT_H
#define NMSMEDIASYNCINFOUPDATERHEARTBEAT_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NMSMediaSyncInfoUpdaterHeartbeat : NSObject {
    NSObject<OS_dispatch_source> *_currentSyncInfoRequestDateTimer;
    NSString *_bundleIdentifier;
}




-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif