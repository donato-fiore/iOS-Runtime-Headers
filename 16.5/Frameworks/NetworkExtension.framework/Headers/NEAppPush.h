// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAPPPUSH_H
#define NEAPPPUSH_H

@class NSArray, NSString, NSDictionary;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEAppPush : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy) NSArray *matchPrivateLTENetworks; // ivar: _matchPrivateLTENetworks
@property (copy) NSArray *matchSSIDs; // ivar: _matchSSIDs
@property (copy) NSString *pluginType; // ivar: _pluginType
@property (copy) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (copy) NSDictionary *providerConfiguration; // ivar: _providerConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)overlapsWithConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif