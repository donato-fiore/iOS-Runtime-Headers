// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERCONFIGURABLEOPTIONS_H
#define PRPOSTERCONFIGURABLEOPTIONS_H

@class NSString, NSArray;
@protocol BSDescriptionStreamable, NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>

#import "PRPosterDescriptorHomeScreenConfiguration.h"

@interface PRPosterConfigurableOptions : NSObject <BSDescriptionStreamable, NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration; // ivar: _preferredHomeScreenConfiguration
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations; // ivar: _preferredTimeFontConfigurations
@property (copy, nonatomic) NSArray *preferredTitleColors; // ivar: _preferredTitleColors
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfigurableOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayNameLocalizationKey:(id)arg0 preferredTimeFontConfigurations:(id)arg1 preferredTitleColors:(id)arg2 preferredHomeScreenConfiguration:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif