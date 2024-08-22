// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKUNKNOWNPLAYERINTERNAL_H
#define GKUNKNOWNPLAYERINTERNAL_H



#import "GKSpecialPlayerInternal.h"

@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal



+(BOOL)supportsSecureCoding;
-(BOOL)isUnknownPlayer;
-(id)gamePlayerID;
-(id)playerID;
-(id)teamPlayerID;


@end


#endif