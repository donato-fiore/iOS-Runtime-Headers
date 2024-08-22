// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPLUGINPLAYBACKMANAGER_H
#define CKPLUGINPLAYBACKMANAGER_H

@class NSMutableArray;
@protocol CKPluginPlaybackManagerDelegate;

#import <Foundation/Foundation.h>


@interface CKPluginPlaybackManager : NSObject {
    NSUInteger _currentIndex;
}


@property (retain, nonatomic, setter=_setPluginItems:) NSMutableArray *_pluginItems; // ivar: __pluginItems
@property (weak, nonatomic) NSObject<CKPluginPlaybackManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, setter=_setPlayingBack:) BOOL isPlayingBack; // ivar: _isPlayingBack


-(id)initWithPluginItems:(id)arg0 ;
-(void)_cleanup;
-(void)addPluginItem:(id)arg0 ;
-(void)dealloc;
-(void)startPlayback;
-(void)stopPlayback;


@end


#endif