// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAORIENTATIONOPERATOR_H
#define IPAORIENTATIONOPERATOR_H



#import "IPAGeometryOperator.h"

@interface IPAOrientationOperator : IPAGeometryOperator {
    NSInteger _orientation;
}




+(id)operatorWithIdentifier:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)operatorWithOrientation:(NSInteger)arg0 ;
-(id)description;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif