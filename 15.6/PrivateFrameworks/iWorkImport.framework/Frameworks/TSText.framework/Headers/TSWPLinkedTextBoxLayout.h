// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPLINKEDTEXTBOXLAYOUT_H
#define TSWPLINKEDTEXTBOXLAYOUT_H



#import "TSWPShapeLayout.h"
#import "TSWPLinkedLayout.h"

@interface TSWPLinkedTextBoxLayout : TSWPShapeLayout

@property (readonly, nonatomic) TSWPLinkedLayout *containedLayout;
@property (nonatomic) NSUInteger indexInFlow; // ivar: _indexInFlow


-(void)i_invalidateWrap;


@end


#endif