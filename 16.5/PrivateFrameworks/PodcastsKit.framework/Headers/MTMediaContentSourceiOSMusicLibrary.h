// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMEDIACONTENTSOURCEIOSMUSICLIBRARY_H
#define MTMEDIACONTENTSOURCEIOSMUSICLIBRARY_H

@protocol OS_dispatch_queue;


#import "MTMediaContentSource.h"

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource

@property (readonly, nonatomic) BOOL iTunesMatchEnabled; // ivar: _iTunesMatchEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)init;
-(void)determineiTunesMatchEnabledWithCompletion:(id)arg0 ;


@end


#endif