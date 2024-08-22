// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKELECTROCARDIOGRAMSESSIONTASKCONFIGURATION_H
#define HKELECTROCARDIOGRAMSESSIONTASKCONFIGURATION_H

@protocol NSCopying;


#import "HKTaskConfiguration.h"
#import "HKElectrocardiogramSessionConfiguration.h"

@interface HKElectrocardiogramSessionTaskConfiguration : HKTaskConfiguration <NSCopying>



@property (copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif