// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKVERIFIABLECLINICALRECORDQUERYSERVERCONFIGURATION_H
#define _HKVERIFIABLECLINICALRECORDQUERYSERVERCONFIGURATION_H

@class NSArray;


#import "HKQueryServerConfiguration.h"

@interface _HKVerifiableClinicalRecordQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *recordTypes; // ivar: _recordTypes


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif