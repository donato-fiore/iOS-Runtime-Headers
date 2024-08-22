// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHPHONENUMBER_H
#define CHPHONENUMBER_H

@class NSString;


#import "CHLogger.h"

@interface CHPhoneNumber : CHLogger

@property (readonly, copy, nonatomic) NSString *digits; // ivar: _digits
@property (readonly, copy, nonatomic) NSString *formattedRepresentation; // ivar: _formattedRepresentation
@property (nonatomic) BOOL formattedRepresentationAttempted; // ivar: _formattedRepresentationAttempted
@property (copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, copy, nonatomic) NSString *normalizedRepresentation; // ivar: _normalizedRepresentation
@property (nonatomic) BOOL normalizedRepresentationAttempted; // ivar: _normalizedRepresentationAttempted


-(id)initWithDigits:(id)arg0 isoCountryCode:(id)arg1 ;


@end


#endif