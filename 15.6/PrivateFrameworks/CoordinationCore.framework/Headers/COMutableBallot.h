// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMUTABLEBALLOT_H
#define COMUTABLEBALLOT_H



#import "COBallot.h"

@interface COMutableBallot : COBallot



-(BOOL)addDiscoveryRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addCandidate:(id)arg0 ;
-(void)mergeBallot:(id)arg0 ;
-(void)removeCandidate:(id)arg0 ;


@end


#endif