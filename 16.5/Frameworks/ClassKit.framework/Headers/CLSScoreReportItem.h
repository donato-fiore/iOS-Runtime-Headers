// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSCOREREPORTITEM_H
#define CLSSCOREREPORTITEM_H

@protocol NSSecureCoding, NSCopying;


#import "CLSActivityReportItem.h"

@interface CLSScoreReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (readonly, nonatomic) CGFloat normalized;
@property (nonatomic) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)convertToItemCompatibleWithItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scalarMultiply:(CGFloat)arg0 ;


@end


#endif