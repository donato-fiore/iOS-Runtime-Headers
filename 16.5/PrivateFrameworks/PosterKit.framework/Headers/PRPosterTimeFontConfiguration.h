// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERTIMEFONTCONFIGURATION_H
#define PRPOSTERTIMEFONTCONFIGURATION_H

@class NSString;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRPosterTimeFontConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)configurationWithTimeFontConfiguration:(id)arg0 extensionBundleIdentifier:(id)arg1 ;
+(id)configurationWithTimeFontConfiguration:(id)arg0 extensionBundleURL:(id)arg1 ;
+(id)defaultConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)timeFontConfigurationWithExtensionBundle:(id)arg0 ;
-(id)timeFontConfigurationWithExtensionBundleIdentifier:(id)arg0 ;
-(id)timeFontConfigurationWithExtensionBundleURL:(id)arg0 ;
-(id)timeFontIdentifier;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif