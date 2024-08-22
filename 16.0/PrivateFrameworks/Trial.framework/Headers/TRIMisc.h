// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIMISC_H
#define TRIMISC_H


#import <Foundation/Foundation.h>


@interface TRIMisc : NSObject



+(BOOL)convertFromString:(id)arg0 usingBase:(int)arg1 toI64:(*NSInteger)arg2 ;
+(BOOL)convertFromString:(id)arg0 usingBase:(int)arg1 toU64:(*NSUInteger)arg2 ;
+(NSUInteger)roundToOneSignificantDigitWithU64:(NSUInteger)arg0 ;
+(NSUInteger)unsafeFirstAuthenticationState;
+(id)bestEffortSymbolicateAddress:(*void)arg0 ;


@end


#endif