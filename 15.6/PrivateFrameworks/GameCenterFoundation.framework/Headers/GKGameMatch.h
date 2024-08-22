// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGAMEMATCH_H
#define GKGAMEMATCH_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "GKGame.h"
#import "GKRecentMatchInternal.h"
#import "GKPlayer.h"

@interface GKGameMatch : NSObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (retain) GKRecentMatchInternal *internal; // ivar: _internal
@property (retain, nonatomic) GKPlayer *player; // ivar: _player


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 game:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif