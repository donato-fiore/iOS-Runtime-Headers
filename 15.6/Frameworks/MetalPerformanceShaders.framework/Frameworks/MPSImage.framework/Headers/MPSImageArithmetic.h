// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEARITHMETIC_H
#define MPSIMAGEARITHMETIC_H



#import "MPSBinaryImageKernel.h"

@interface MPSImageArithmetic : MPSBinaryImageKernel {
    int _arithmeticType;
}


@property (nonatomic) float bias; // ivar: _bias
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (nonatomic) float primaryScale; // ivar: _primaryScale
@property (nonatomic) ? primaryStrideInPixels; // ivar: _primaryStrideInPixels
@property (nonatomic) float secondaryScale; // ivar: _secondaryScale
@property (nonatomic) ? secondaryStrideInPixels; // ivar: _secondaryStrideInPixels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 arithmeticType:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif