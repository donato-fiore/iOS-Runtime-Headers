// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADSHAPE_H
#define OADSHAPE_H



#import "OADGraphic.h"
#import "OADShapeGeometry.h"
#import "OADTextBody.h"
#import "OADOrientedBounds.h"

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}


@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds; // ivar: mTextOrientedBounds


-(BOOL)isTextBox;
-(id)description;
-(id)geometry;
-(id)init;
-(id)shapeProperties;
-(id)shapeStyle;
-(id)textBody;
-(int)type;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)createPresetGeometryWithShapeType:(int)arg0 ;
-(void)flattenProperties;
-(void)removeUnnecessaryOverrides;
-(void)setGeometry:(id)arg0 ;
-(void)setParentTextListStyle:(id)arg0 ;
-(void)setTextBody:(id)arg0 ;


@end


#endif