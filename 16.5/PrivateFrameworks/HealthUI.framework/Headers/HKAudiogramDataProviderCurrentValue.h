// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAUDIOGRAMDATAPROVIDERCURRENTVALUE_H
#define HKAUDIOGRAMDATAPROVIDERCURRENTVALUE_H

@class NSNumber, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKAudiogramDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    NSUInteger _diagnosticCategory;
    NSNumber *_leftAverageEarSensitivity;
    NSNumber *_rightAverageEarSensitivity;
    NSNumber *_minimumSensitivity;
    NSNumber *_maximumSensitivity;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_localizedAverageSensitivity:(id)arg0 ear:(NSInteger)arg1 displayType:(id)arg2 unitController:(id)arg3 shortened:(BOOL)arg4 ;
-(id)_rangeStringWithDisplayType:(id)arg0 unitController:(id)arg1 ;
-(id)_stringWithDisplayType:(id)arg0 unitController:(id)arg1 shortened:(BOOL)arg2 ;
-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg0 unitController:(id)arg1 font:(id)arg2 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg0 unitController:(id)arg1 font:(id)arg2 shortened:(BOOL)arg3 ;
-(id)initWithDiagnosticCategory:(NSUInteger)arg0 leftAverageEarSensitivity:(id)arg1 rightAverageEarSensitivity:(id)arg2 minimumSensitivity:(id)arg3 maximumSensitivity:(id)arg4 date:(id)arg5 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;
-(id)lastUpdatedShortDescriptionWithDateCache:(id)arg0 ;
-(id)stringWithDisplayType:(id)arg0 unitController:(id)arg1 ;


@end


#endif