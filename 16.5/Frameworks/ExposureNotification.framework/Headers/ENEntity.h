// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENENTITY_H
#define ENENTITY_H

@class NSArray, NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENEntity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *agencyColor; // ivar: _agencyColor
@property (readonly, copy, nonatomic) NSNumber *agencyHeaderStyle; // ivar: _agencyHeaderStyle
@property (readonly, copy, nonatomic) NSArray *agencyHeaderTextColor; // ivar: _agencyHeaderTextColor
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *localizedAgencyImageURL; // ivar: _localizedAgencyImageURL
@property (readonly, copy, nonatomic) NSString *localizedAgencyName; // ivar: _localizedAgencyName
@property (readonly, copy, nonatomic) NSString *localizedAgencyTurndownMessage; // ivar: _localizedAgencyTurndownMessage
@property (readonly, copy, nonatomic) NSString *localizedRegionName; // ivar: _localizedRegionName
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleID:(id)arg0 agencyColor:(id)arg1 agencyHeaderStyle:(id)arg2 agencyHeaderTextColor:(id)arg3 localizedAgencyName:(id)arg4 localizedAgencyImageURL:(id)arg5 localizedAgencyTurndownMessage:(id)arg6 localizedRegionName:(id)arg7 region:(id)arg8 ;
-(id)initWithBundleID:(id)arg0 region:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif