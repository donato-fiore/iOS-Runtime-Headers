// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERHOMEPOSTERHOMESCREENAPPEARANCE_H
#define PRPOSTERHOMEPOSTERHOMESCREENAPPEARANCE_H



#import "PRPosterHomeScreenAppearance.h"

@interface PRPosterHomePosterHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, nonatomic) BOOL allowsModifyingLegibilityBlur; // ivar: _allowsModifyingLegibilityBlur
@property (readonly, nonatomic, getter=isLegibilityBlurEnabled) BOOL legibilityBlurEnabled; // ivar: _legibilityBlurEnabled


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyByTogglingLegibilityBlurEnabled;
-(id)copyWithLegibilityBlurEnabled:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegibilityBlurEnabled:(BOOL)arg0 allowsModifyingLegibilityBlur:(BOOL)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif