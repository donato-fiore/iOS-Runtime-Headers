// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LI3DENGINESCENEMANAGER_H
#define LI3DENGINESCENEMANAGER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface Li3DEngineSceneManager : NSObject

@property (readonly, nonatomic) NSMutableSet *appliedForces; // ivar: _appliedForces


-(BOOL)applyForce:(*void)arg0 node:(id)arg1 arScale:(float)arg2 objects:(*void)arg3 ;
-(BOOL)hasAppliedForce:(id)arg0 ;
-(id)init;
-(void)resetSim;


@end


#endif