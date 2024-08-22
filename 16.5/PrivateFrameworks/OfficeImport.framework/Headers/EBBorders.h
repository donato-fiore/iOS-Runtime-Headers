// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EBBORDERS_H
#define EBBORDERS_H


#import <Foundation/Foundation.h>


@interface EBBorders : NSObject



+(id)edBordersFromXlDXf:(struct XlDXf *)arg0 edResources:(id)arg1 ;
+(id)edBordersFromXlXf:(struct XlXf *)arg0 edResources:(id)arg1 ;
+(int)convertEDBorderEnumToXl:(int)arg0 ;
+(int)convertEDDiagonalEnumToXl:(int)arg0 ;
+(int)convertXlBorderEnumToED:(int)arg0 ;
+(int)convertXlDiagStyleEnumToED:(int)arg0 ;


@end


#endif