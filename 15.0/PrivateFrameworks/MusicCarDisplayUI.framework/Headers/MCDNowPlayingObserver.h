// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDNOWPLAYINGOBSERVER_H
#define MCDNOWPLAYINGOBSERVER_H

@class NSHashTable, NSString;

#import <Foundation/Foundation.h>


@interface MCDNowPlayingObserver : NSObject {
    NSHashTable *_observers;
}


@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) unsigned int playbackState; // ivar: _playbackState


+(id)sharedInstance;
-(id)init;
-(unsigned int)queryPlaybackState;
-(void)_notifyObservers;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)playbackStateChanged:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif