// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADIMAGE_H
#define OADIMAGE_H



#import "OADGraphic.h"
#import "OADShapeGeometry.h"
#import "OADOle.h"
#import "OADMovie.h"

@interface OADImage : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}




-(id)createImageFill;
-(id)description;
-(id)geometry;
-(id)imageProperties;
-(id)init;
-(id)initWithBlipRef:(id)arg0 ;
-(id)movie;
-(id)ole;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)createPictureFramePresetGeometry;
-(void)setGeometry:(id)arg0 ;
-(void)setMovie:(id)arg0 ;
-(void)setOle:(id)arg0 ;
-(void)setParentTextListStyle:(id)arg0 ;


@end


#endif