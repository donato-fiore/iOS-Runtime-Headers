// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERFETCHREQUEST_H
#define AVTSTICKERFETCHREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVTStickerFetchRequest : NSObject

@property (readonly, copy, nonatomic) NSString *avatarIdentifier; // ivar: _avatarIdentifier
@property (readonly, nonatomic) NSInteger criteria; // ivar: _criteria
@property (readonly, nonatomic) NSInteger resultLimit; // ivar: _resultLimit
@property (readonly, copy, nonatomic) NSString *stickerIdentifier; // ivar: _stickerIdentifier


+(id)requestForAllRecentStickers;
+(id)requestForMostRecentStickersWithResultLimit:(NSInteger)arg0 ;
+(id)requestForStickersWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCriteria:(NSInteger)arg0 ;
-(id)initWithCriteria:(NSInteger)arg0 avatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
-(id)initWithCriteria:(NSInteger)arg0 resultLimit:(NSInteger)arg1 ;


@end


#endif