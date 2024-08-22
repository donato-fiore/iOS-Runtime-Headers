// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSHAPEBUILDER_H
#define CMSHAPEBUILDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "OADOrientedBounds.h"

@interface CMShapeBuilder : NSObject {
    int _type;
    OADOrientedBounds *_orientedBounds;
    NSUInteger _format;
    NSDictionary *_adjustValues;
}




+(struct CGRect )canonicalBounds;
-(BOOL)isOffice12;
-(float)maxAdjustedValue;
-(struct CGAffineTransform )affineTransform;
-(struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform )arg0 ;
-(void)setAdjustValues:(id)arg0 ;
-(void)setFileFormat:(NSUInteger)arg0 ;
-(void)setOrientedBounds:(id)arg0 ;
-(void)setShapeType:(int)arg0 ;


@end


#endif