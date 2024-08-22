// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESHAREDENGINE_H
#define PHASESHAREDENGINE_H

@class NSMutableDictionary;


#import "PHASEEngine.h"
#import "PHASESharedListener.h"

@interface PHASESharedEngine : PHASEEngine {
    PHASESharedListener *_sharedListener;
    NSMutableDictionary *_sessionRootObjects;
}


@property (readonly, nonatomic) PHASESharedListener *sharedListener;


-(id)initWithUpdateMode:(NSInteger)arg0 error:(*id)arg1 ;
-(id)rootObject;
-(id)rootObjectForSessionIOBinding:(id)arg0 error:(*id)arg1 ;
-(id)rootObjectForSessionUUID:(id)arg0 error:(*id)arg1 ;
-(id)sessionRootObjects;
-(void)gatherSharedEntityDebugInformation:(id)arg0 ;


@end


#endif