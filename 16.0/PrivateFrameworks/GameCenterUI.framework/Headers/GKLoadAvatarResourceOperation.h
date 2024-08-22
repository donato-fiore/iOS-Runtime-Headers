// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLOADAVATARRESOURCEOPERATION_H
#define GKLOADAVATARRESOURCEOPERATION_H

@class NSString;


#import "GKLoadResourceOperation.h"

@interface GKLoadAvatarResourceOperation : GKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *playerId; // ivar: _playerId


-(id)initWithPlayerId:(id)arg0 ;
-(id)makePlayerFetchError;
-(void)main;


@end


#endif