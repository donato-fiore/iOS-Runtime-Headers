// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMLAYOUTCELL_H
#define AXMLAYOUTCELL_H



#import "AXMLayoutItem.h"
#import "AXMVisionFeature.h"

@interface AXMLayoutCell : AXMLayoutItem {
    AXMVisionFeature *_feature;
}




+(id)sequence:(id)arg0 ;
-(id)feature;
-(struct CGRect )frame;
-(struct CGRect )normalizedFrame;


@end


#endif