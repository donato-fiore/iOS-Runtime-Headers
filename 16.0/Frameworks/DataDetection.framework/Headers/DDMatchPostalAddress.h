// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDMATCHPOSTALADDRESS_H
#define DDMATCHPOSTALADDRESS_H

@class NSString;


#import "DDMatch.h"

@interface DDMatchPostalAddress : DDMatch

@property (readonly, nonatomic) NSString *city; // ivar: _city
@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) NSString *street; // ivar: _street


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif