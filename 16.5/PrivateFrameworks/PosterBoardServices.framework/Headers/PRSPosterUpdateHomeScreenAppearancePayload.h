// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATEHOMESCREENAPPEARANCEPAYLOAD_H
#define PRSPOSTERUPDATEHOMESCREENAPPEARANCEPAYLOAD_H

@class NSString;
@protocol NSSecureCoding;


#import "PRSPosterUpdatePayload.h"
#import "PRSPosterUpdateColorPayload.h"
#import "PRSPosterUpdateSessionInfo.h"

@interface PRSPosterUpdateHomeScreenAppearancePayload : PRSPosterUpdatePayload <NSSecureCoding>



@property (readonly, copy, nonatomic) PRSPosterUpdateColorPayload *gradientColorAppearance; // ivar: _gradientColorAppearance
@property (readonly, copy, nonatomic) NSString *homeProviderIdentifier; // ivar: _homeProviderIdentifier
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *homeProviderUpdateSessionInfo; // ivar: _homeProviderUpdateSessionInfo
@property (readonly, copy, nonatomic) PRSPosterUpdateColorPayload *solidColorAppearance; // ivar: _solidColorAppearance
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *switcherProviderUpdateSessionInfo; // ivar: _switcherProviderUpdateSessionInfo
@property (readonly, nonatomic) NSUInteger updatedAppearanceType; // ivar: _updatedAppearanceType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdatedAppearanceType:(NSUInteger)arg0 ;
-(id)initWithUpdatedAppearanceType:(NSUInteger)arg0 gradientColorAppearance:(id)arg1 ;
-(id)initWithUpdatedAppearanceType:(NSUInteger)arg0 solidColorAppearance:(id)arg1 ;
-(id)initWithUpdatedAppearanceType:(NSUInteger)arg0 updateHomePoster:(id)arg1 homeProviderIdentifier:(id)arg2 ;
-(id)initWithUpdatedAppearanceType:(NSUInteger)arg0 updateSwitcherPoster:(id)arg1 ;
-(id)rawValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif