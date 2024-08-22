// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALGATEWAYREFERENCE_H
#define HKCLINICALGATEWAYREFERENCE_H

@class HKFHIRVersion, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalGatewayReference : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion; // ivar: _FHIRVersion
@property (readonly, copy, nonatomic) NSString *gatewayBatchID; // ivar: _gatewayBatchID
@property (readonly, copy, nonatomic) NSString *gatewayID; // ivar: _gatewayID
@property (readonly, nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGatewayID:(id)arg0 gatewayBatchID:(id)arg1 minCompatibleAPIVersion:(NSInteger)arg2 FHIRVersion:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif