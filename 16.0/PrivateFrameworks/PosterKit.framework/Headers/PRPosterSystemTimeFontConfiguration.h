// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERSYSTEMTIMEFONTCONFIGURATION_H
#define PRPOSTERSYSTEMTIMEFONTCONFIGURATION_H

@class NSString;


#import "PRPosterTimeFontConfiguration.h"

@interface PRPosterSystemTimeFontConfiguration : PRPosterTimeFontConfiguration

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier; // ivar: _timeFontIdentifier


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)defaultTimeFontIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeFontIdentifier:(id)arg0 ;
-(id)timeFontConfigurationWithExtensionBundleURL:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif