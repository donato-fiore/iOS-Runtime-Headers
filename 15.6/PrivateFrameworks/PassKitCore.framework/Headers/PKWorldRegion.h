// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKWORLDREGION_H
#define PKWORLDREGION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKWorldRegion.h"

@interface PKWorldRegion : NSObject <NSSecureCoding>

 {
    CGFloat _latitude;
    CGFloat _longitude;
    CGFloat _latitudeDelta;
    CGFloat _longitudeDelta;
}


@property (retain, nonatomic) NSString *abbreviationCode; // ivar: _abbreviationCode
@property (nonatomic) ? displayRegion;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (retain, nonatomic) PKWorldRegion *parentRegion; // ivar: _parentRegion
@property (nonatomic) int resultProviderIdentifier; // ivar: _resultProviderIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSUInteger)mostConstrainingTypeInRegions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToWorldRegion:(id)arg0 ;
-(BOOL)isIncludedInRegions:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)regionOfType:(NSUInteger)arg0 ;
-(id)searchString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif