// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFRIENDLISTROW_H
#define ASFRIENDLISTROW_H

@class ASFriend, _HKFitnessFriendActivitySnapshot;

#import <Foundation/Foundation.h>


@interface ASFriendListRow : NSObject

@property (retain, nonatomic) ASFriend *friend; // ivar: _friend
@property (retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot; // ivar: _snapshot


-(BOOL)isEqual:(id)arg0 ;


@end


#endif