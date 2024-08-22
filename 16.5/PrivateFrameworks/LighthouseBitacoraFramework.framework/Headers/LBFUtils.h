// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFUTILS_H
#define LBFUTILS_H


#import <Foundation/Foundation.h>


@interface LBFUtils : NSObject



+(BOOL)IsEmptyTrialIdentifiers:(id)arg0 ;
+(BOOL)IsEqualNumberOrNil:(id)arg0 n2:(id)arg1 ;
+(BOOL)IsEqualStringOrNil:(id)arg0 s2:(id)arg1 ;
+(BOOL)switchToMobile;
+(id)dateToGMTDate:(id)arg0 ;
+(id)dateToTimestampStringInMSec:(id)arg0 ;


@end


#endif