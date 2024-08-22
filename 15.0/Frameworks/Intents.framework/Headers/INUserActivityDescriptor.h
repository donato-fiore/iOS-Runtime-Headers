// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUSERACTIVITYDESCRIPTOR_H
#define INUSERACTIVITYDESCRIPTOR_H

@class NSString;


#import "INAppDescriptor.h"

@interface INUserActivityDescriptor : INAppDescriptor

@property (readonly, copy, nonatomic) NSString *userActivityType; // ivar: _userActivityType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)appDescriptor;
-(id)description;
-(id)descriptorWithAppDescriptor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivityType:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithUserActivityType:(id)arg0 localizedName:(id)arg1 bundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 counterpartIdentifiers:(id)arg4 teamIdentifier:(id)arg5 supportedIntents:(id)arg6 bundleURL:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif