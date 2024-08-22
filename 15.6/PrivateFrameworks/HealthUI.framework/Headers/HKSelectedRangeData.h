// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSELECTEDRANGEDATA_H
#define HKSELECTEDRANGEDATA_H

@class NSAttributedString, UIColor, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface HKSelectedRangeData : NSObject

@property (retain, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (copy, nonatomic) UIColor *prefixColor; // ivar: _prefixColor
@property (nonatomic) NSInteger statisticsType; // ivar: _statisticsType
@property (copy, nonatomic) NSString *titleOverride; // ivar: _titleOverride
@property (copy, nonatomic) NSNumber *valueAsNumber; // ivar: _valueAsNumber


-(id)initWithStatisticsType:(NSInteger)arg0 ;


@end


#endif