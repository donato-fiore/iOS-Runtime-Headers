// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSIGNEDCLINICALDATASOURCE_H
#define HKSIGNEDCLINICALDATASOURCE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSignedClinicalDataQRRepresentation.h"
#import "HKSignedClinicalDataFile.h"

@interface HKSignedClinicalDataSource : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKSignedClinicalDataQRRepresentation *QRRepresentation; // ivar: _QRRepresentation
@property (readonly, copy, nonatomic) HKSignedClinicalDataFile *file; // ivar: _file


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(id)initWithQRRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif