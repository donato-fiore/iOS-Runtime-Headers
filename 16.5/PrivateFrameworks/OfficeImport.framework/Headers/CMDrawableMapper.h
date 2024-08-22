// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDRAWABLEMAPPER_H
#define CMDRAWABLEMAPPER_H

@class NSData, NSString;


#import "CMMapper.h"
#import "OADDrawable.h"
#import "CMDrawableStyle.h"
#import "OADOrientedBounds.h"

@interface CMDrawableMapper : CMMapper {
    OADDrawable *mDrawable;
    CMDrawableStyle *mStyle;
    NSData *mImageBinaryData;
    NSString *mName;
    NSString *mExtension;
    int mResourceType;
    NSString *mSourcePath;
    CGRect mBox;
    float mRotation;
    BOOL mIsSupported;
    BOOL mIsCropped;
    CGRect mUncroppedBox;
    OADOrientedBounds *mOrientedBounds;
}




-(BOOL)isCropped;
-(float)rotation;
-(id)blipAtIndex:(unsigned int)arg0 ;
-(id)convertMetafileToPdf;
-(id)initWithOadDrawable:(id)arg0 parent:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)saveResourceAndReturnPath:(id)arg0 withType:(int)arg1 ;
-(struct CGRect )box;
-(struct CGRect )shapeTextBoxRect;
-(struct CGRect )uncroppedBox;
-(void)calculateUncroppedBox:(id)arg0 ;
-(void)mapBounds;
-(void)mapDrawingContext:(id)arg0 at:(id)arg1 relative:(BOOL)arg2 withState:(id)arg3 ;
-(void)mapImageBinaryData;
-(void)mapShapeGraphicsAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg0 withState:(id)arg1 ;
-(void)setBoundingBox;
-(void)setRotation:(float)arg0 ;
-(void)setWithOadImage:(id)arg0 ;


@end


#endif