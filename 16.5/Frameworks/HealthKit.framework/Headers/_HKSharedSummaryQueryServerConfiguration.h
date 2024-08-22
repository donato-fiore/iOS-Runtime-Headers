// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSHAREDSUMMARYQUERYSERVERCONFIGURATION_H
#define _HKSHAREDSUMMARYQUERYSERVERCONFIGURATION_H

@class NSString;


#import "HKQueryServerConfiguration.h"
#import "HKSharedSummaryTransaction.h"

@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSString *package; // ivar: _package
@property (copy, nonatomic) HKSharedSummaryTransaction *transaction; // ivar: _transaction


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif