// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFAUTOJOINPARAMETERS_H
#define CWFAUTOJOINPARAMETERS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFNetworkProfile.h"

@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger mode; // ivar: _mode
@property (copy, nonatomic) CWFNetworkProfile *targetNetworkProfile; // ivar: _targetNetworkProfile
@property (nonatomic) NSInteger trigger; // ivar: _trigger


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutoJoinParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif