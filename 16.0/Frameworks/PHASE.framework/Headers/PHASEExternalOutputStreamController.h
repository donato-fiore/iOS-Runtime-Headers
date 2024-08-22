// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEEXTERNALOUTPUTSTREAMCONTROLLER_H
#define PHASEEXTERNALOUTPUTSTREAMCONTROLLER_H

@class NSMutableDictionary, NSUUID, NSDictionary;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"
#import "PHASENumberMetaParameterDefinition.h"
#import "PHASEMixerDefinition.h"
#import "PHASESource.h"
#import "PHASEListener.h"
#import "PHASEGroup.h"
#import "PHASEMixer.h"

@interface PHASEExternalOutputStreamController : NSObject {
    PHASEEngine *_engine;
    UniqueObjectId _controlToken;
    NSInteger _state;
    NSMutableDictionary *_soundEvents;
    NSMutableDictionary *_metaParameters;
    NSUUID *_streamGroupUUID;
    PHASENumberMetaParameterDefinition *_gainMetaParameterDefinition;
    PHASEMixerDefinition *_mixerDefinition;
    PHASESource *_source;
    PHASEListener *_listener;
    PHASEGroup *_group;
    BOOL _normalize;
    NSInteger _calibrationMode;
    CGFloat _level;
    unsigned int _channelLayoutTag;
}


@property (readonly) NSDictionary *metaParameters;
@property (readonly, nonatomic) PHASEMixer *mixer; // ivar: _mixer
@property (readonly, copy) NSDictionary *mixers;


+(id)new;
+(void)controllerWithEngine:(id)arg0 streamUUID:(id)arg1 gainMetaParameterDefinition:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 callback:(id)arg6 ;
+(void)controllerWithEngine:(id)arg0 streamUUID:(id)arg1 gainMetaParameterDefinition:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 group:(id)arg6 normalize:(BOOL)arg7 calibrationMode:(NSInteger)arg8 level:(CGFloat)arg9 callback:(id)arg10 ;
+(void)controllerWithEngine:(id)arg0 streamUUID:(id)arg1 gainMetaParameterDefinition:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 normalize:(BOOL)arg6 calibrationMode:(NSInteger)arg7 level:(CGFloat)arg8 callback:(id)arg9 ;
+(void)controllerWithEngine:(id)arg0 streamUUID:(id)arg1 gainMetaParameterDefinition:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 referenceGainDBSPL:(CGFloat)arg6 callback:(id)arg7 ;
+(void)controllerWithEngine:(id)arg0 streamUUID:(id)arg1 mixerDefinition:(id)arg2 source:(id)arg3 listener:(id)arg4 callback:(id)arg5 ;
-(BOOL)prepareAndReturnError:(*id)arg0 ;
-(BOOL)startAndReturnError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEngine:(id)arg0 streamGroupUUID:(id)arg1 gainMetaParameterDefinition:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 group:(id)arg6 normalize:(BOOL)arg7 calibrationMode:(NSInteger)arg8 level:(CGFloat)arg9 outError:(*id)arg10 ;
-(id)metaParametersForStreamUUID:(id)arg0 ;
-(struct UniqueObjectId )controlToken;
-(void)dealloc;
-(void)setControlToken:(struct UniqueObjectId )arg0 ;
-(void)setMetaParameter:(id)arg0 value:(CGFloat)arg1 withTimeInterval:(CGFloat)arg2 ;
-(void)setMetaParameter:(id)arg0 value:(id)arg1 ;
-(void)stopAndDestroy;
-(void)stopAndInvalidate;
-(void)updateStreamGroupUUID:(id)arg0 streamUUID:(id)arg1 state:(NSInteger)arg2 ;


@end


#endif