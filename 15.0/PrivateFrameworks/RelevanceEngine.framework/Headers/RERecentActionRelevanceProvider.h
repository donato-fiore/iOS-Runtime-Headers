// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERECENTACTIONRELEVANCEPROVIDER_H
#define RERECENTACTIONRELEVANCEPROVIDER_H

@class NSString;


#import "RERelevanceProvider.h"
#import "RERecentAction.h"

@interface RERecentActionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSUInteger actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) RERecentAction *recentAction;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 actionIdentifier:(NSUInteger)arg1 ;


@end


#endif