// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKDESCRIPTIONCONTAINERBOXVIEW_H
#define TLKDESCRIPTIONCONTAINERBOXVIEW_H

@class NUIContainerBoxView;


#import "TLKTextView.h"

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView

@property (retain, nonatomic) TLKTextView *viewForFirstAndLastBaseline; // ivar: _viewForFirstAndLastBaseline


-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;


@end


#endif