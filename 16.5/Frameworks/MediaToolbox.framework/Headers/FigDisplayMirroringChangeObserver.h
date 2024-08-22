// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGDISPLAYMIRRORINGCHANGEOBSERVER_H
#define FIGDISPLAYMIRRORINGCHANGEOBSERVER_H

@class NSMutableSet, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigDisplayMirroringChangeObserver : NSObject {
    *OpaqueFigPlayer _player;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_clonedDisplays;
    NSMutableSet *_cloningSupportedDisplays;
    NSArray *_baseDisplayList;
    BOOL _needToRemoveObserversOnCADisplays;
    *unk _callback;
    *OpaqueFigCFWeakReferenceHolder _weakCallbackContext;
}




-(id)init;
-(id)initWithCallback:(*unk)arg0 context:(*void)arg1 ;
-(id)initWithPlayer:(struct OpaqueFigPlayer *)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeCallback;
-(void)removeObserversOnCADisplays;
-(void)removeReferenceToPlayer;
-(void)setBaseDisplayList:(id)arg0 ;
-(void)updatePlayerDisplayList;


@end


#endif