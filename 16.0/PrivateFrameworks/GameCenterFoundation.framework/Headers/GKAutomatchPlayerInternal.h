// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKAUTOMATCHPLAYERINTERNAL_H
#define GKAUTOMATCHPLAYERINTERNAL_H

@class NSString;


#import "GKSpecialPlayerInternal.h"

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) NSInteger automatchPosition; // ivar: _automatchPosition
@property (readonly, nonatomic) NSString *automatchPositionDisplayString;


+(BOOL)supportsSecureCoding;
-(BOOL)isAutomatchPlayer;
-(id)alias;
-(id)gamePlayerID;
-(id)playerID;
-(id)teamPlayerID;


@end


#endif