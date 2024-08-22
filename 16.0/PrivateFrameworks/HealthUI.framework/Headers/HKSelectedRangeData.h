// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSELECTEDRANGEDATA_H
#define HKSELECTEDRANGEDATA_H

@class NSAttributedString, UIColor, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface HKSelectedRangeData : NSObject

@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (nonatomic) BOOL prefersImageAffixes; // ivar: _prefersImageAffixes
@property (copy, nonatomic) UIColor *prefixColor; // ivar: _prefixColor
@property (nonatomic) NSInteger statisticsType; // ivar: _statisticsType
@property (copy, nonatomic) NSString *titleOverride; // ivar: _titleOverride
@property (copy, nonatomic) NSNumber *valueAsNumber; // ivar: _valueAsNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSelectedRangeData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStatisticsType:(NSInteger)arg0 ;


@end


#endif