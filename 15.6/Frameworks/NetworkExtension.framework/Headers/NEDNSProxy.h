// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEDNSPROXY_H
#define NEDNSPROXY_H

@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEDNSProxyProviderProtocol.h"

@interface NEDNSProxy : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy) NEDNSProxyProviderProtocol *protocol; // ivar: _protocol


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif