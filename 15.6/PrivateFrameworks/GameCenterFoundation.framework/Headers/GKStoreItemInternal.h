// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSTOREITEMINTERNAL_H
#define GKSTOREITEMINTERNAL_H

@class NSNumber, NSString, NSDate, NSURL;


#import "GKInternalRepresentation.h"

@interface GKStoreItemInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (retain, nonatomic) NSString *artistName; // ivar: _artistName
@property (nonatomic) float averageUserRating; // ivar: _averageUserRating
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) unsigned int numberOfUserRatings; // ivar: _numberOfUserRatings
@property (nonatomic) BOOL owned; // ivar: _owned
@property (retain, nonatomic) NSString *priceDisplay; // ivar: _priceDisplay
@property (retain, nonatomic) NSURL *shortViewItemURL; // ivar: _shortViewItemURL
@property (retain, nonatomic) NSURL *tellAFriendMessageContentsUrl; // ivar: _tellAFriendMessageContentsUrl
@property (retain, nonatomic) NSURL *viewItemURL; // ivar: _viewItemURL


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)storeItemURLForURL:(id)arg0 gamePlatform:(NSInteger)arg1 extraQueryParams:(id)arg2 ;
-(void)storeItemURLForGamePlatform:(NSInteger)arg0 withContext:(id)arg1 withHandler:(id)arg2 ;


@end


#endif