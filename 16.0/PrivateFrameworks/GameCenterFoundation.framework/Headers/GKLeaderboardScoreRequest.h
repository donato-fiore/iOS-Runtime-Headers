// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDSCOREREQUEST_H
#define GKLEADERBOARDSCOREREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKPlayerInternal.h"

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL friendsOnly; // ivar: _friendsOnly
@property (copy, nonatomic) NSString *gameBundleID; // ivar: _gameBundleID
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) GKPlayerInternal *playerInternal; // ivar: _playerInternal
@property (nonatomic, getter=isPrefetch) BOOL prefetch; // ivar: _prefetch
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


+(BOOL)supportsSecureCoding;
+(id)requestForPlayerInternals:(id)arg0 ;
+(id)requestForRankRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif