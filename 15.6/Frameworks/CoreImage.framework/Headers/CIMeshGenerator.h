// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIMESHGENERATOR_H
#define CIMESHGENERATOR_H

@class NSArray, NSNumber;


#import "CIFilter.h"
#import "CIColor.h"

@interface CIMeshGenerator : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) NSArray *inputMesh; // ivar: inputMesh
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(id)_CIMesh1;
-(id)_CIMesh16;
-(id)_CIMesh2;
-(id)_CIMesh32;
-(id)_CIMesh4;
-(id)_CIMesh8;
-(id)outputImage;
-(struct CGRect )extentOfMeshStart:(int)arg0 count:(int)arg1 halfWidth:(CGFloat)arg2 ;


@end


#endif