// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESOUNDEVENT_H
#define PHASESOUNDEVENT_H

@class AVAudioSession, NSDictionary;
@protocol MetaParameterValueProtocol;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"
#import "PHASESoundPrototype.h"

@interface PHASESoundEvent : NSObject <MetaParameterValueProtocol>

 {
    PHASEEngine *_engine;
    BOOL _startCalled;
    PHASESoundPrototype *_protoType;
    shared_ptr<Phase::ActionTreeObject> _actionTreeObject;
    vector<Phase::UniqueObjectId, std::allocator<Phase::UniqueObjectId>> _submixIds;
    AVAudioSession *_audioSession;
}


@property (readonly, getter=isIndefinite) BOOL indefinite; // ivar: _indefinite
@property (readonly) BOOL isIndefinite; // ivar: _isIndefinite
@property (readonly, copy) NSDictionary *metaParameters; // ivar: _metaParameters
@property (readonly, copy) NSDictionary *mixers; // ivar: _mixers
@property (readonly) NSInteger prepareState; // ivar: _prepareState
@property (readonly, copy) NSDictionary *pushStreamNodes; // ivar: _pushStreamNodes
@property (readonly) NSInteger renderingState; // ivar: _renderingState


+(id)new;
-(BOOL)indefinite;
-(BOOL)internalPrepareActionTreeWithCompletionBlock:(id)arg0 ;
-(BOOL)internalStartActionTreeWithCompletionBlock:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)prepareAndReturnError:(*id)arg0 ;
-(BOOL)seekToTime:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(BOOL)seekToTime:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(BOOL)startAndReturnError:(*id)arg0 ;
-(BOOL)startWithCompletionBlock:(id)arg0 ;
-(BOOL)startWithCompletionHandler:(id)arg0 ;
-(NSUInteger)hash;
-(id)getActionTreeMetaParameterNames;
-(id)init;
-(id)initWithEngine:(id)arg0 actionTreeRootNode:(id)arg1 mixerParameters:(id)arg2 outError:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 actionTreeRootNode:(id)arg1 outError:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 actionTreeRootNode:(id)arg1 source:(id)arg2 listener:(id)arg3 outError:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 assetIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 assetIdentifier:(id)arg1 mixerParameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 assetIdentifier:(id)arg1 source:(id)arg2 listener:(id)arg3 error:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 registeredActionTreeUID:(id)arg1 mixerParameters:(id)arg2 outError:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 registeredActionTreeUID:(id)arg1 outError:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 registeredActionTreeUID:(id)arg1 source:(id)arg2 listener:(id)arg3 outError:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 registeredSoundEventNodeAsset:(id)arg1 mixerParameters:(id)arg2 outError:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 registeredSoundEventNodeAsset:(id)arg1 outError:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 registeredSoundEventNodeAsset:(id)arg1 source:(id)arg2 listener:(id)arg3 outError:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 registeredSoundEventNodeAssetUID:(id)arg1 mixerParameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 registeredSoundEventNodeAssetUID:(id)arg1 source:(id)arg2 listener:(id)arg3 outError:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 rootNode:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 rootNode:(id)arg1 mixerParameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 rootNode:(id)arg1 source:(id)arg2 listener:(id)arg3 error:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 soundPrototype:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 soundPrototype:(id)arg1 mixerParameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithEngine:(id)arg0 soundPrototype:(id)arg1 source:(id)arg2 listener:(id)arg3 error:(*id)arg4 ;
-(id)initWithEngine:(id)arg0 soundPrototype:(id)arg1 source:(id)arg2 listener:(id)arg3 outError:(*id)arg4 ;
-(id)internalGetActionTreeMetaParameters;
-(id)internalGetActionTreeMixersWithMixerParameters:(id)arg0 actionTreeAsset:(*void)arg1 outError:(*id)arg2 ;
-(id)internalGetActionTreePushStreamNodes:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)prepareWithCompletionBlock:(id)arg0 ;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)prepareWithSessionIOBinding:(id)arg0 completion:(id)arg1 ;
-(void)registerTapSources;
-(void)resume;
-(void)seekToTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)setMetaParameter:(id)arg0 value:(CGFloat)arg1 withTimeInterval:(CGFloat)arg2 ;
-(void)setMetaParameter:(id)arg0 value:(id)arg1 ;
-(void)startWithCompletion:(id)arg0 ;
-(void)stopAndDestroy;
-(void)stopAndInvalidate;
-(void)unregisterTapSources;


@end


#endif