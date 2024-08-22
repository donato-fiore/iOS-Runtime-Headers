// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONCONFIGURATIONSWITCH_H
#define LNACTIONCONFIGURATIONSWITCH_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;


#import "LNActionConfiguration.h"

@interface LNActionConfigurationSwitch : LNActionConfiguration <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *cases; // ivar: _cases
@property (readonly, copy, nonatomic) NSString *parameterIdentifier; // ivar: _parameterIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterIdentifier:(id)arg0 cases:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif