// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREACTIVATIONOPTION_H
#define PKPASSSHAREACTIVATIONOPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassShareActivationOption : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *localizationKeyPostfix;
@property (readonly, nonatomic) NSString *localizedName;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSString *value; // ivar: _value
@property (nonatomic) NSInteger valueLength; // ivar: _valueLength


+(BOOL)supportsSecureCoding;
+(id)vehicleEnteredPin;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassShareActivationOption:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCarKeyIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultIdentifierForType:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif