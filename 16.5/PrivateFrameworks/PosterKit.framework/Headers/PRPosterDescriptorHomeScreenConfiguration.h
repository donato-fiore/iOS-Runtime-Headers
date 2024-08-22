// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERDESCRIPTORHOMESCREENCONFIGURATION_H
#define PRPOSTERDESCRIPTORHOMESCREENCONFIGURATION_H

@class NSString, NSArray;
@protocol BSXPCSecureCoding, BSDescriptionStreamable, NSSecureCoding, NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface PRPosterDescriptorHomeScreenConfiguration : NSObject <BSXPCSecureCoding, BSDescriptionStreamable, NSSecureCoding, NSMutableCopying, NSCopying>



@property (nonatomic) BOOL allowsModifyingLegibilityBlur; // ivar: _allowsModifyingLegibilityBlur
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *preferredGradientColors; // ivar: _preferredGradientColors
@property (copy, nonatomic) NSArray *preferredSolidColors; // ivar: _preferredSolidColors
@property (nonatomic) NSUInteger preferredStyle; // ivar: _preferredStyle
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreferredSolidColors:(id)arg0 ;
-(id)initWithPreferredSolidColors:(id)arg0 preferredGradientColors:(id)arg1 ;
-(id)initWithPreferredStyle:(NSUInteger)arg0 ;
-(id)initWithPreferredStyle:(NSUInteger)arg0 allowsModifyingLegibilityBlur:(BOOL)arg1 preferredSolidColors:(id)arg2 preferredGradientColors:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif