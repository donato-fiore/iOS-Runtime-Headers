// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POSTALADDRESS_H
#define POSTALADDRESS_H

@class INObject, NSString;



@interface PostalAddress : INObject

@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif