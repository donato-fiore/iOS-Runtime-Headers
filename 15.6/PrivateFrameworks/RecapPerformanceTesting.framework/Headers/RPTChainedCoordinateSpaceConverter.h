// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPTCHAINEDCOORDINATESPACECONVERTER_H
#define RPTCHAINEDCOORDINATESPACECONVERTER_H



#import "RPTCoordinateSpaceConverter.h"

@interface RPTChainedCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) RPTCoordinateSpaceConverter *primary; // ivar: _primary
@property (retain, nonatomic) RPTCoordinateSpaceConverter *secondary; // ivar: _secondary


-(id)initWithPrimary:(id)arg0 secondary:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 ;
-(struct CGSize )convertSize:(struct CGSize )arg0 ;
-(struct CGVector )convertVector:(struct CGVector )arg0 ;


@end


#endif