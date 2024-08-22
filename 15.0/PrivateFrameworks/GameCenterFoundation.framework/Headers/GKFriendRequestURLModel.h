// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKFRIENDREQUESTURLMODEL_H
#define GKFRIENDREQUESTURLMODEL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GKPlayer.h"

@interface GKFriendRequestURLModel : NSObject

@property (retain, nonatomic) NSString *friendCode; // ivar: _friendCode
@property (retain, nonatomic) NSString *friendRequestState; // ivar: _friendRequestState
@property (retain, nonatomic) NSString *friendRequestVersion; // ivar: _friendRequestVersion
@property (retain, nonatomic) NSString *friendSupportPageURL; // ivar: _friendSupportPageURL
@property (retain, nonatomic) GKPlayer *initiator; // ivar: _initiator


-(id)description;


@end


#endif