// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHANDWASHINGEVENTDATAPROVIDERCOUNTCOMPARISON_H
#define HKHANDWASHINGEVENTDATAPROVIDERCOUNTCOMPARISON_H

@class NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKHandwashingEventDataProviderCountComparison : NSObject <HKDataProviderValue>

 {
    NSInteger _completeCount;
    NSInteger _totalCount;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg0 unitController:(id)arg1 font:(id)arg2 ;
-(id)initWithCompleteCount:(NSInteger)arg0 totalCount:(NSInteger)arg1 date:(id)arg2 ;


@end


#endif