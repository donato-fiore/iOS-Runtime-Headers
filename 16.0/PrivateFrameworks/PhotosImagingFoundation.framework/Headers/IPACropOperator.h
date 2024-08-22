// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPACROPOPERATOR_H
#define IPACROPOPERATOR_H



#import "IPAGeometryOperator.h"

@interface IPACropOperator : IPAGeometryOperator {
    CGRect _cropRect;
}




+(id)operatorWithCropRect:(struct CGRect )arg0 ;
+(id)operatorWithIdentifier:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)description;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif