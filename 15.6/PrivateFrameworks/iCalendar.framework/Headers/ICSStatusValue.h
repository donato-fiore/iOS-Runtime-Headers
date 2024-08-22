// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSSTATUSVALUE_H
#define ICSSTATUSVALUE_H

@class NSString;


#import "ICSPredefinedValue.h"

@interface ICSStatusValue : ICSPredefinedValue

@property (retain) NSString *statusString; // ivar: _statusString


+(id)statusTypeFromCode:(int)arg0 ;
+(id)statusTypeFromCode:(int)arg0 statusString:(id)arg1 ;
+(id)statusValueFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif