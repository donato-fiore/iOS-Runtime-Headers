// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERRULE_H
#define NEFILTERRULE_H

@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NENetworkRule.h"

@interface NEFilterRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (readonly) NSInteger action; // ivar: _action
@property (readonly, copy) NENetworkRule *networkRule; // ivar: _networkRule


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkRule:(id)arg0 action:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif