// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADSHAPE3D_H
#define OADSHAPE3D_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADBevel.h"
#import "OADColor.h"

@interface OADShape3D : NSObject <NSCopying>

 {
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}




+(id)nullShape3D;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)contourWidth;
-(float)extrusionHeight;
-(float)shapeDepth;
-(id)bottomBevel;
-(id)contourColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extrusionColor;
-(id)init;
-(id)topBevel;
-(int)material;
-(void)setBottomBevel:(id)arg0 ;
-(void)setContourColor:(id)arg0 ;
-(void)setContourWidth:(float)arg0 ;
-(void)setExtrusionColor:(id)arg0 ;
-(void)setExtrusionHeight:(float)arg0 ;
-(void)setMaterial:(int)arg0 ;
-(void)setShapeDepth:(float)arg0 ;
-(void)setTopBevel:(id)arg0 ;


@end


#endif