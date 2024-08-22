// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFUISCROLLVIEW_H
#define OFUISCROLLVIEW_H

@class UIScrollView, NSMutableArray;


#import "OFUIViewController.h"

@interface OFUIScrollView : UIScrollView {
    NSMutableArray *_draggingPasteboardTypes;
}


@property (nonatomic) OFUIViewController *viewControllerProxy; // ivar: _viewControllerProxy


-(id)draggingPasteboardTypes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)registerDraggingPasteboardType:(id)arg0 ;
-(void)unregisterAllDraggingPasteboardType;


@end


#endif