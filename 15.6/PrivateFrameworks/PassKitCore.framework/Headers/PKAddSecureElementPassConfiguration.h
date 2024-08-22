// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDSECUREELEMENTPASSCONFIGURATION_H
#define PKADDSECUREELEMENTPASSCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger configurationType; // ivar: _configurationType
@property (copy, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription


+(BOOL)supportsSecureCoding;
-(BOOL)hasRequiredDataForProvisioning;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif