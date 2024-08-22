// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESHAREDROOT_H
#define PHASESHAREDROOT_H

@class AVAudioSession;


#import "PHASEObject.h"

@interface PHASESharedRoot : PHASEObject {
    UniqueObjectId _sessionUUID;
}


@property (readonly) AVAudioSession *session; // ivar: _session


-(id)initWithEngine:(id)arg0 ;
-(id)initWithEngine:(id)arg0 entityType:(unsigned int)arg1 shapes:(id)arg2 ;
-(id)initWithEngine:(id)arg0 sessionUUID:(id)arg1 ;
-(void)dealloc;
-(void)setTransform:(struct ? )arg0 ;


@end


#endif