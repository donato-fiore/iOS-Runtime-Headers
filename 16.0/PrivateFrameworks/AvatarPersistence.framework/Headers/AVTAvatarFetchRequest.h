// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARFETCHREQUEST_H
#define AVTAVATARFETCHREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVTAvatarFetchRequest : NSObject

@property (readonly, nonatomic) NSInteger criteria; // ivar: _criteria
@property (readonly, copy, nonatomic) NSArray *excludingIdentifiers; // ivar: _excludingIdentifiers
@property (readonly, nonatomic) NSInteger fetchLimit; // ivar: _fetchLimit
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers


+(id)requestForAllAvatars;
+(id)requestForAllAvatarsExcluding:(id)arg0 ;
+(id)requestForAvatarWithIdentifier:(id)arg0 ;
+(id)requestForAvatarsWithIdentifiers:(id)arg0 ;
+(id)requestForCustomAvatars;
+(id)requestForCustomAvatarsWithLimit:(NSInteger)arg0 ;
+(id)requestForPredefinedAvatars;
+(id)requestForPredefinedAvatarsExcluding:(id)arg0 ;
+(id)requestForStorePrimaryAvatar;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCriteria:(NSInteger)arg0 ;
-(id)initWithCriteria:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)initWithCriteria:(NSInteger)arg0 identifiers:(id)arg1 excludedIdentifiers:(id)arg2 fetchLimit:(NSInteger)arg3 ;


@end


#endif