// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEPUSHSTREAMNODE_H
#define PHASEPUSHSTREAMNODE_H

@class AVAudioFormat;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"
#import "PHASENumberMetaParameter.h"
#import "PHASEMixer.h"

@interface PHASEPushStreamNode : NSObject {
    UniqueObjectId _actionTreeUniqueId;
    NSUInteger _nodeUID;
}


@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) PHASENumberMetaParameter *gainMetaParameter; // ivar: _gainMetaParameter
@property (readonly, nonatomic) PHASEMixer *mixer; // ivar: _mixer
@property (readonly) BOOL normalize; // ivar: _normalize
@property (readonly, nonatomic) PHASENumberMetaParameter *rateMetaParameter; // ivar: _rateMetaParameter


-(id)initWithEngine:(id)arg0 actionTreeUniqueId:(struct UniqueObjectId )arg1 nodeStringHashId:(NSUInteger)arg2 mixer:(id)arg3 format:(id)arg4 normalize:(BOOL)arg5 ;
-(void)scheduleBuffer:(id)arg0 ;
-(void)scheduleBuffer:(id)arg0 atTime:(id)arg1 options:(NSUInteger)arg2 ;
-(void)scheduleBuffer:(id)arg0 atTime:(id)arg1 options:(NSUInteger)arg2 completionCallbackType:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)scheduleBuffer:(id)arg0 completionCallbackType:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif