// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MNDISTANCEFORMATOPTIONS_H
#define _MNDISTANCEFORMATOPTIONS_H

@class NSLocale, NSUnitLength;

#import <Foundation/Foundation.h>


@interface _MNDistanceFormatOptions : NSObject

@property (nonatomic) BOOL abbreviateUnits; // ivar: _abbreviateUnits
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) NSUInteger maximumFractionDigits; // ivar: _maximumFractionDigits
@property (nonatomic) BOOL metric; // ivar: _metric
@property (nonatomic) NSUInteger minimumFractionDigits; // ivar: _minimumFractionDigits
@property (nonatomic) NSInteger rounding; // ivar: _rounding
@property (nonatomic) BOOL spoken; // ivar: _spoken
@property (retain, nonatomic) NSUnitLength *unitLength; // ivar: _unitLength
@property (nonatomic) BOOL yards; // ivar: _yards


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif