// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITSECTIONPAGINGFILTER_H
#define MKTRANSITSECTIONPAGINGFILTER_H


#import <Foundation/Foundation.h>


@interface MKTransitSectionPagingFilter : NSObject

@property (nonatomic) BOOL limitNumLines; // ivar: _limitNumLines
@property (nonatomic) NSUInteger numLinesFallbackThreshold; // ivar: _numLinesFallbackThreshold
@property (nonatomic) NSUInteger numLinesFallbackValue; // ivar: _numLinesFallbackValue


+(BOOL)_newStationCardUIEnabled;
+(NSUInteger)_kMaxLinesInSectionBeforePage;
+(NSUInteger)_kNumLinesFallbackValue;
+(id)defaultFilterForDepartures;
+(id)defaultFilterForInactiveLines;


@end


#endif