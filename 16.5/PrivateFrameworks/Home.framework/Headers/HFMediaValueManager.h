// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMEDIAVALUEMANAGER_H
#define HFMEDIAVALUEMANAGER_H

@class NSError, NSString, NSMutableArray;
@protocol HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol, HFHomeKitObject, HFMediaProfileContainer;

#import <Foundation/Foundation.h>


@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol>



@property (retain, nonatomic) NSError *cachedPlaybackStateWriteError; // ivar: _cachedPlaybackStateWriteError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPendingWrites; // ivar: _hasPendingWrites
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, weak, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *transactionStack; // ivar: _transactionStack


-(BOOL)hasPendingWritesForRouteID:(id)arg0 ;
-(NSInteger)lastPlaybackStateForProfileForRouteID:(id)arg0 ;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg0 ;
-(id)init;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)mediaProfileContainerForRouteID:(id)arg0 ;
-(id)writePlaybackState:(NSInteger)arg0 playbackArchive:(id)arg1 forRouteID:(id)arg2 ;
-(void)_notifyDelegatesDidUpdatePlaybackState:(NSInteger)arg0 mediaSession:(id)arg1 ;
-(void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg0 mediaSession:(id)arg1 ;
-(void)_notifyDelegatesWillUpdatePlaybackState:(NSInteger)arg0 mediaSession:(id)arg1 ;
-(void)_updateCachedPlaybackStateWriteError:(id)arg0 operationType:(id)arg1 notifyDelegates:(BOOL)arg2 ;
-(void)_updateLastPlaybackState:(NSInteger)arg0 sender:(SEL)arg1 notifyWillUpdate:(BOOL)arg2 notifyDidUpdate:(BOOL)arg3 ;
-(void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg0 notifyDelegates:(BOOL)arg1 ;
-(void)mediaObject:(id)arg0 didUpdateMediaSession:(id)arg1 ;
-(void)mediaSession:(id)arg0 didUpdatePlaybackState:(NSInteger)arg1 ;


@end


#endif