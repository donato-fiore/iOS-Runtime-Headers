// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEEXTERNALSTREAM_H
#define PHASEEXTERNALSTREAM_H

@class NSUUID;
@protocol PHASEExternalStreamDelegate;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEExternalStream : NSObject {
    NSUUID *_groupUUID;
    NSUUID *_streamUUID;
    PHASEEngine *_engine;
}


@property (readonly, weak, nonatomic) NSObject<PHASEExternalStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) unsigned int latencyInFrames; // ivar: _latencyInFrames
@property (readonly, nonatomic) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) NSUUID *uuid;


+(id)new;
+(id)newUUID;
-(id)engine;
-(id)init;
-(id)initWithEngine:(id)arg0 groupUUID:(id)arg1 streamUUID:(id)arg2 startsPaused:(BOOL)arg3 delegate:(id)arg4 ;
-(id)streamUUID;
-(void)pause;
-(void)resume;


@end


#endif