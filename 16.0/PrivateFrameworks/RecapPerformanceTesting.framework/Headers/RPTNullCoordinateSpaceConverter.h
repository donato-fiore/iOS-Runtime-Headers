// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTNULLCOORDINATESPACECONVERTER_H
#define RPTNULLCOORDINATESPACECONVERTER_H



#import "RPTCoordinateSpaceConverter.h"

@interface RPTNullCoordinateSpaceConverter : RPTCoordinateSpaceConverter



-(id)init;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 ;
-(struct CGSize )convertSize:(struct CGSize )arg0 ;
-(struct CGVector )convertVector:(struct CGVector )arg0 ;


@end


#endif