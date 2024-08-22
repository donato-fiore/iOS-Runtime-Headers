// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERCUSTOMTIMEFONTCONFIGURATION_H
#define PRPOSTERCUSTOMTIMEFONTCONFIGURATION_H

@class NSString;


#import "PRPosterTimeFontConfiguration.h"

@interface PRPosterCustomTimeFontConfiguration : PRPosterTimeFontConfiguration

@property (readonly, copy, nonatomic) NSString *extensionBundleRelativeFilePath; // ivar: _extensionBundleRelativeFilePath
@property (readonly, copy, nonatomic) NSString *fontPostScriptName; // ivar: _fontPostScriptName


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)fontWithExtensionBundleURL:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFont:(id)arg0 extensionBundle:(id)arg1 ;
-(id)initWithFont:(id)arg0 extensionBundleURL:(id)arg1 ;
-(id)initWithFontPostScriptName:(id)arg0 extensionBundleRelativeFilePath:(id)arg1 ;
-(id)timeFontConfigurationWithExtensionBundleURL:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif