// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKMOVIEPLAYBACKREGISTRY_H
#define TSKMOVIEPLAYBACKREGISTRY_H


#import <Foundation/Foundation.h>


@interface TSKMoviePlaybackRegistry : NSObject



+(id)sharedMoviePlaybackRegistry;
-(void)object:(id)arg0 willTransferMoviePlaybackToObject:(id)arg1 ;
-(void)objectDidEndMoviePlayback:(id)arg0 ;
-(void)objectWillBeginMoviePlayback:(id)arg0 ;


@end


#endif