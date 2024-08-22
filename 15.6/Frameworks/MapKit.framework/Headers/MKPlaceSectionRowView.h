// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACESECTIONROWVIEW_H
#define MKPLACESECTIONROWVIEW_H



#import "MKPlaceSectionItemView.h"

@interface MKPlaceSectionRowView : MKPlaceSectionItemView

@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(void)_updateBackgroundColor:(BOOL)arg0 ;


@end


#endif