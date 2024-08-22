// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODISTATE_H
#define ODISTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ODDDiagram.h"
#import "OADOrientedBounds.h"
#import "OADGroup.h"
#import "OADShapeStyle.h"
#import "OADDrawingTheme.h"

@interface ODIState : NSObject {
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    CGRect mLogicalBounds;
    CGFloat mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}




-(CGFloat)scale;
-(id)defaultStyleLabelNameForPointType:(int)arg0 ;
-(id)diagram;
-(id)diagramOrientedBounds;
-(id)drawingTheme;
-(id)group;
-(id)initWithDiagram:(id)arg0 group:(id)arg1 drawingTheme:(id)arg2 ;
-(id)presentationNameForPointType:(int)arg0 ;
-(id)textStyle;
-(int)pointCount;
-(int)pointIndex;
-(struct CGRect )logicalBounds;
-(void)setDefaultStyleLabelName:(id)arg0 forPointType:(int)arg1 ;
-(void)setGroup:(id)arg0 ;
-(void)setLogicalBounds:(struct CGRect )arg0 ;
-(void)setLogicalBounds:(struct CGRect )arg0 maintainAspectRatio:(BOOL)arg1 ;
-(void)setPointCount:(int)arg0 ;
-(void)setPointIndex:(int)arg0 ;
-(void)setPresentationName:(id)arg0 forPointType:(int)arg1 ;
-(void)setTextStyle:(id)arg0 ;


@end


#endif