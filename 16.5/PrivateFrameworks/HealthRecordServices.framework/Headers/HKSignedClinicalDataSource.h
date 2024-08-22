// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATASOURCE_H
#define HKSIGNEDCLINICALDATASOURCE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSignedClinicalDataQRRepresentation.h"
#import "HKSignedClinicalDataFile.h"

@interface HKSignedClinicalDataSource : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKSignedClinicalDataQRRepresentation *QRRepresentation; // ivar: _QRRepresentation
@property (readonly, copy, nonatomic) HKSignedClinicalDataFile *file; // ivar: _file
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)sourceWithQRCodeValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFile:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithQRRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif