// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAVSHAPEGEOMETRY_H
#define OAVSHAPEGEOMETRY_H


#import <Foundation/Foundation.h>


@interface OAVShapeGeometry : NSObject



+(id)readFromManager:(id)arg0 ;
+(struct OADAdjustCoord )readAdjustCoord:(id)arg0 ;
+(void)readAdjustValuesFromManager:(id)arg0 toGeometry:(id)arg1 ;
+(void)readLimoFromManager:(id)arg0 toGeometry:(id)arg1 ;
+(void)readTextBodyRectsFromManager:(id)arg0 toGeometry:(id)arg1 ;


@end


#endif