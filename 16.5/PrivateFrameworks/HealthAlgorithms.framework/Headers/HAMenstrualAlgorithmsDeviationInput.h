// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSDEVIATIONINPUT_H
#define HAMENSTRUALALGORITHMSDEVIATIONINPUT_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsDeviationInput : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndInfrequent; // ivar: _julianDayMinAnalysisWindowEndInfrequent
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndIrregular; // ivar: _julianDayMinAnalysisWindowEndIrregular
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndProlonged; // ivar: _julianDayMinAnalysisWindowEndProlonged
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndSpotting; // ivar: _julianDayMinAnalysisWindowEndSpotting
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartInfrequent; // ivar: _julianDayMinAnalysisWindowStartInfrequent
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartIrregular; // ivar: _julianDayMinAnalysisWindowStartIrregular
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartProlonged; // ivar: _julianDayMinAnalysisWindowStartProlonged
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartSpotting; // ivar: _julianDayMinAnalysisWindowStartSpotting


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif