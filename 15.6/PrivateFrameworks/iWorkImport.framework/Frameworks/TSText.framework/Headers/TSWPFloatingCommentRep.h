// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPFLOATINGCOMMENTREP_H
#define TSWPFLOATINGCOMMENTREP_H



#import "TSWPShapeRep.h"

@interface TSWPFloatingCommentRep : TSWPShapeRep



-(BOOL)forcesPlacementOnTop;
-(BOOL)modelIsReadOnly;
-(BOOL)p_shouldDraw;
-(id)documentRoot;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;


@end


#endif