// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALPROVIDERSEARCHRESULT_H
#define HKCLINICALPROVIDERSEARCHRESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, HKClinicalBrandable;

#import <Foundation/Foundation.h>

#import "HKClinicalBrand.h"

@interface HKClinicalProviderSearchResult : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>



@property (readonly, copy, nonatomic) NSString *batchID; // ivar: _batchID
@property (readonly, copy, nonatomic) HKClinicalBrand *brand; // ivar: _brand
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupported) BOOL supported; // ivar: _supported
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)informationURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalID:(id)arg0 batchID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 location:(id)arg4 supported:(BOOL)arg5 countryCode:(id)arg6 brand:(id)arg7 minCompatibleAPIVersion:(NSInteger)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif