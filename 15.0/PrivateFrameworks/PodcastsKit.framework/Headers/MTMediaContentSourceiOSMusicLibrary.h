// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMEDIACONTENTSOURCEIOSMUSICLIBRARY_H
#define MTMEDIACONTENTSOURCEIOSMUSICLIBRARY_H



#import "MTMediaContentSource.h"

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource

@property (readonly, nonatomic) BOOL iTunesMatchEnabled; // ivar: _iTunesMatchEnabled


+(id)sharedInstance;
-(void)determineiTunesMatchEnabledWithCompletion:(id)arg0 ;


@end


#endif