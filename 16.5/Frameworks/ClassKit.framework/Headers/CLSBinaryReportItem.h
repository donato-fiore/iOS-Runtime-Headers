// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSBINARYREPORTITEM_H
#define CLSBINARYREPORTITEM_H

@protocol NSSecureCoding, NSCopying;


#import "CLSActivityReportItem.h"

@interface CLSBinaryReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL value; // ivar: _value
@property (nonatomic) NSInteger valueType; // ivar: _valueType


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