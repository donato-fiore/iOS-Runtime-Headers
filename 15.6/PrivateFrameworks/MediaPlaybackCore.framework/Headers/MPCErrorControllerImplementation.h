// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCERRORCONTROLLERIMPLEMENTATION_H
#define MPCERRORCONTROLLERIMPLEMENTATION_H

@class NSMutableSet, MPAVItem, NSString;
@protocol MFErrorController, MPCExternalPlaybackRouter;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCMediaFoundationTranslator.h"

@interface MPCErrorControllerImplementation : NSObject <MFErrorController>



@property (retain, nonatomic) NSObject<MPCExternalPlaybackRouter> *externalPlaybackRouter; // ivar: _externalPlaybackRouter
@property (retain, nonatomic) NSMutableSet *failedItemsIdentifiers; // ivar: _failedItemsIdentifiers
@property (nonatomic) BOOL itemsHavePlayed; // ivar: itemsHavePlayed
@property (retain, nonatomic) MPAVItem *lastItemUsedForErrorResolution; // ivar: _lastItemUsedForErrorResolution
@property (weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (copy, nonatomic) NSString *preferredFirstContentItemID; // ivar: preferredFirstContentItemID
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


-(BOOL)canHandleFirstItemFailure;
-(BOOL)isAssetUnavailableFailure:(id)arg0 ;
-(BOOL)isFirstItemFailure:(id)arg0 item:(id)arg1 ;
-(BOOL)isQueueLoadingFailure:(id)arg0 ;
-(BOOL)isUnrecoverableAssetLoadingError:(id)arg0 ;
-(BOOL)shouldHandleFirstItemFailure:(id)arg0 item:(id)arg1 ;
-(NSInteger)_resolutionForPlaybackError:(id)arg0 item:(id)arg1 ;
-(id)initWithPlaybackEngine:(id)arg0 translator:(id)arg1 externalPlaybackRouter:(id)arg2 ;
-(void)_notifyObserversForError:(id)arg0 item:(id)arg1 ;
-(void)_playbackFailedWithError:(id)arg0 item:(id)arg1 canResolve:(BOOL)arg2 proposedResolution:(NSInteger)arg3 completion:(id)arg4 ;
-(void)reportCriticalError:(id)arg0 forItem:(id)arg1 ;
-(void)reset;
-(void)resolveError:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif