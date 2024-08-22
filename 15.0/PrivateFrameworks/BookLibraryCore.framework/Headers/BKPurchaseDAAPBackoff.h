// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKPURCHASEDAAPBACKOFF_H
#define BKPURCHASEDAAPBACKOFF_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface BKPurchaseDAAPBackoff : NSObject

@property (retain, nonatomic) NSDate *backoffUntil; // ivar: _backoffUntil
@property (nonatomic) NSInteger failureCount; // ivar: _failureCount


-(BOOL)failureIntervals:(NSUInteger)arg0 ;
-(BOOL)hasBackedOff;
-(void)clear;


@end


#endif