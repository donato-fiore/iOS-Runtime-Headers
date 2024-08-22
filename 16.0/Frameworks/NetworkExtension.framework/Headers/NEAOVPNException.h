// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAOVPNEXCEPTION_H
#define NEAOVPNEXCEPTION_H

@class NSString, NSArray;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEAOVPNException : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property NSInteger action; // ivar: _action
@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) NSArray *limitToProtocols; // ivar: _limitToProtocols
@property (copy) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isLimitedToUDP;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif