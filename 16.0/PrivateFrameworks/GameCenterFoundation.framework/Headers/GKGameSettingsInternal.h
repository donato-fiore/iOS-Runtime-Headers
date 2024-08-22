// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKGAMESETTINGSINTERNAL_H
#define GKGAMESETTINGSINTERNAL_H

@class NSString;


#import "GKInternalRepresentation.h"

@interface GKGameSettingsInternal : GKInternalRepresentation

@property (nonatomic) NSInteger allowFriendListAccess; // ivar: _allowFriendListAccess
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGameSettings:(id)arg0 ;
-(id)serverAllowFriendListAccessValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif