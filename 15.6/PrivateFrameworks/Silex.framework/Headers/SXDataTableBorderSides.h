// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATATABLEBORDERSIDES_H
#define SXDATATABLEBORDERSIDES_H



#import "SXJSONObject.h"
#import "SXDataTableBorder.h"
#import "SXUnitConverter.h"

@interface SXDataTableBorderSides : SXJSONObject

@property (readonly, nonatomic) SXDataTableBorder *bottom;
@property (readonly, nonatomic) SXDataTableBorder *left;
@property (readonly, nonatomic) SXDataTableBorder *right;
@property (readonly, nonatomic) SXDataTableBorder *top;
@property (retain, nonatomic) SXUnitConverter *unitConverter; // ivar: _unitConverter


-(id)borderForValue:(id)arg0 ;
-(id)bottomWithValue:(id)arg0 withType:(int)arg1 ;
-(id)leftWithValue:(id)arg0 withType:(int)arg1 ;
-(id)rightWithValue:(id)arg0 withType:(int)arg1 ;
-(id)topWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif