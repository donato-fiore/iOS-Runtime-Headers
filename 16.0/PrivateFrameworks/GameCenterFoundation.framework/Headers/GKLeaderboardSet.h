// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDSET_H
#define GKLEADERBOARDSET_H

@class NSString, NSArray;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKLeaderboardSetInternal.h"

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (retain) GKLeaderboardSetInternal *internal; // ivar: _internal
@property (readonly, retain, nonatomic) NSArray *leaderboardIdentifiers;
@property (copy, nonatomic) NSString *title;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(void)loadLeaderboardSetsForGame:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadLeaderboardSetsWithCompletionHandler:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadLeaderboardsForGame:(id)arg0 forPlayer:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)loadLeaderboardsForGame:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadLeaderboardsWithCompletionHandler:(id)arg0 ;
-(void)loadLeaderboardsWithHandler:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif