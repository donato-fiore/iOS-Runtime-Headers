// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIIMAGECONFIGURATION_H
#define UIIMAGECONFIGURATION_H

@class NSString;
@protocol UIImageConfiguration, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL _ignoresDynamicType; // ivar: _ignoresDynamicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsSecureCoding;
-(BOOL)_hasColorConfigurationWithTintColor;
-(BOOL)_isUnspecified;
-(BOOL)_shouldApplyConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToConfiguration:(id)arg0 ;
-(id)_configurationIgnoringDynamicType;
-(id)_init;
-(id)_initWithTraitCollection:(id)arg0 ;
-(id)configurationByApplyingConfiguration:(id)arg0 ;
-(id)configurationWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_applyConfigurationValuesTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif