// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALGATEWAYENDPOINTSCHEMAPARAMETER_H
#define HKCLINICALGATEWAYENDPOINTSCHEMAPARAMETER_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalGatewayEndpointSchemaParameter : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *literal; // ivar: _literal
@property (readonly, copy, nonatomic) NSArray *mode; // ivar: _mode
@property (readonly, copy, nonatomic) NSString *param; // ivar: _param
@property (readonly, copy, nonatomic) NSString *variable; // ivar: _variable


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParam:(id)arg0 literal:(id)arg1 variable:(id)arg2 mode:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif