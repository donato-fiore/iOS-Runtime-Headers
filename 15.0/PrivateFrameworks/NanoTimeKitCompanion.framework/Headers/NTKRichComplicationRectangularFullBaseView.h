// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARFULLBASEVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARFULLBASEVIEW_H

@class UIView;


#import "NTKRichComplicationRectangularBaseView.h"

@interface NTKRichComplicationRectangularFullBaseView : NTKRichComplicationRectangularBaseView {
    UIView *_content;
}




+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)content;
-(id)init;
-(void)layoutSubviews;


@end


#endif