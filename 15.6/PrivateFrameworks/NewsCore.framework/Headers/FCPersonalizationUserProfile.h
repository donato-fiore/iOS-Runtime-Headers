// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONUSERPROFILE_H
#define FCPERSONALIZATIONUSERPROFILE_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FCBundleSubscription.h"

@interface FCPersonalizationUserProfile : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *autofavoritedTagIDs; // ivar: _autofavoritedTagIDs
@property (readonly, nonatomic) FCBundleSubscription *bundleSubscription; // ivar: _bundleSubscription
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs; // ivar: _mutedTagIDs
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs; // ivar: _purchasedTagIDs
@property (readonly, nonatomic) NSSet *readArticleIDs; // ivar: _readArticleIDs
@property (readonly, nonatomic) NSSet *seenArticleIDs; // ivar: _seenArticleIDs
@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs; // ivar: _subscribedTagIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscribedTagIDs:(id)arg0 mutedTagIDs:(id)arg1 autofavoritedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscription:(id)arg4 ;
-(id)initWithSubscribedTagIDs:(id)arg0 mutedTagIDs:(id)arg1 autofavoritedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 readArticleIDs:(id)arg4 seenArticleIDs:(id)arg5 bundleSubscription:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif