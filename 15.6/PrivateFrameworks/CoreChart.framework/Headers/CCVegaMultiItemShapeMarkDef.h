// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGAMULTIITEMSHAPEMARKDEF_H
#define CCVEGAMULTIITEMSHAPEMARKDEF_H



#import "CCVegaMarkDef.h"

@interface CCVegaMultiItemShapeMarkDef : CCVegaMarkDef



-(BOOL)isMultiItemMark;
-(id)drawMark:(id)arg0 withLayer:(id)arg1 ;
-(id)enterMultiMark:(id)arg0 ;
-(id)updateMultiMark:(id)arg0 ;
-(struct CATransform3D )transformForMark:(id)arg0 ;
-(struct CGPath *)newPathForMark:(id)arg0 ;


@end


#endif