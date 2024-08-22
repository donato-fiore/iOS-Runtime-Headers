// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFUIVIEW_H
#define OFUIVIEW_H

@class NSMutableArray;


#import "OFViewProxy.h"

@interface OFUIView : OFViewProxy {
    NSMutableArray *_draggingPasteboardTypes;
}




-(id)draggingPasteboardTypes;
-(void)commonInit;
-(void)dealloc;
-(void)registerDraggingPasteboardType:(id)arg0 ;
-(void)unregisterAllDraggingPasteboardType;


@end


#endif