// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPEVENTENVIRONMENT_H
#define RCPEVENTENVIRONMENT_H

@class NSString, NSArray;
@protocol NSCoding, RCPMachTimestampProvider;

#import <Foundation/Foundation.h>


@interface RCPEventEnvironment : NSObject <NSCoding, RCPMachTimestampProvider>



@property (nonatomic) NSInteger homeButtonHardware; // ivar: _homeButtonHardware
@property (nonatomic) BOOL isSimulator; // ivar: _isSimulator
@property (nonatomic) NSInteger machTimeDenominator; // ivar: _machTimeDenominator
@property (nonatomic) NSInteger machTimeNumerator; // ivar: _machTimeNumerator
@property (nonatomic) int pointerScanRate; // ivar: _pointerScanRate
@property (retain, nonatomic) NSString *productName; // ivar: _productName
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *recapVersion; // ivar: _recapVersion
@property (retain, nonatomic) NSArray *screens; // ivar: _screens
@property (nonatomic) CGFloat startTimeAsIntervalSince1970; // ivar: _startTimeAsIntervalSince1970
@property (nonatomic) NSUInteger startTimeAsMachTimestamp; // ivar: _startTimeAsMachTimestamp
@property (nonatomic) CGFloat timeScale; // ivar: _timeScale
@property (nonatomic) int touchScanRate; // ivar: _touchScanRate


+(id)currentEnvironment;
-(BOOL)hasAbsoluteTimeCorrelation;
-(CGFloat)speedFactorToAdjustRecordingEnvironment:(id)arg0 ;
-(CGFloat)timeIntervalForMachAbsoluteTime:(NSUInteger)arg0 ;
-(CGFloat)timeIntervalSince1970ForMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteTimeForTimeInterval:(CGFloat)arg0 ;
-(NSUInteger)machAbsoluteTimeForTimeIntervalSince1970:(CGFloat)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)timeDescriptionForEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setStartDate:(id)arg0 machAbsoluteTime:(NSUInteger)arg1 ;


@end


#endif