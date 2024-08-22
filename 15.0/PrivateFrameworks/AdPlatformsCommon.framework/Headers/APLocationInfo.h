// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APLOCATIONINFO_H
#define APLOCATIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APLocationInfo : NSObject <NSSecureCoding>



@property (retain) NSString *administrativeArea; // ivar: _administrativeArea
@property (retain) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (retain) NSString *locality; // ivar: _locality
@property (retain) NSString *postalCode; // ivar: _postalCode
@property (retain) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentationWithOptions:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif