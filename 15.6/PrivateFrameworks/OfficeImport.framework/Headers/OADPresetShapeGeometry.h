// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADPRESETSHAPEGEOMETRY_H
#define OADPRESETSHAPEGEOMETRY_H



#import "OADShapeGeometry.h"

@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}




-(id)description;
-(id)equivalentCustomGeometry;
-(id)escherEquivalentCustomGeometry;
-(id)oa12EquivalentCustomGeometry;
-(int)type;
-(void)setType:(int)arg0 ;


@end


#endif