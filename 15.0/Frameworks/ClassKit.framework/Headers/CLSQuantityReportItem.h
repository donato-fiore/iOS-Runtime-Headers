// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSQUANTITYREPORTITEM_H
#define CLSQUANTITYREPORTITEM_H

@protocol NSSecureCoding, NSCopying;


#import "CLSActivityReportItem.h"

@interface CLSQuantityReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat quantity; // ivar: _quantity


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