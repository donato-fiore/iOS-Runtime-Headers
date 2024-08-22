// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNGEOMETRYUTILS_H
#define VNGEOMETRYUTILS_H


#import <Foundation/Foundation.h>


@interface VNGeometryUtils : NSObject



+(BOOL)calculateArea:(*CGFloat)arg0 forContour:(id)arg1 orientedArea:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)calculatePerimeter:(*CGFloat)arg0 forContour:(id)arg1 error:(*id)arg2 ;
+(id)boundingCircleForContour:(id)arg0 error:(*id)arg1 ;
+(id)boundingCircleForPoints:(id)arg0 error:(*id)arg1 ;
+(id)boundingCircleForSIMDPoints:(*NSInteger)arg0 pointCount:(*id)arg1 error;


@end


#endif