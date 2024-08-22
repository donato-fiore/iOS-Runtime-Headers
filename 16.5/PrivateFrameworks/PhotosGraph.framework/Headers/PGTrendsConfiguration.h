// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTRENDSCONFIGURATION_H
#define PGTRENDSCONFIGURATION_H

@class NSString, NSArray;
@protocol PGTrendsConfigurationProtocol;


#import "PGConfiguration.h"

@interface PGTrendsConfiguration : PGConfiguration <PGTrendsConfigurationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureLabel; // ivar: _featureLabel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *negativeScenes; // ivar: _negativeScenes
@property (readonly, nonatomic) NSArray *positiveDominantScenes; // ivar: _positiveDominantScenes
@property (readonly, nonatomic) NSArray *positiveScenes; // ivar: _positiveScenes
@property (readonly, nonatomic) NSArray *positiveSemDevScenes; // ivar: _positiveSemDevScenes
@property (readonly, nonatomic) NSArray *secondaryPositiveScenes; // ivar: _secondaryPositiveScenes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *validTrendTypes; // ivar: _validTrendTypes




@end


#endif