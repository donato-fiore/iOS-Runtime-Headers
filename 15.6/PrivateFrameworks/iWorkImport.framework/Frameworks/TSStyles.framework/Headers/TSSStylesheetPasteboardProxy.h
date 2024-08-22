// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSSTYLESHEETPASTEBOARDPROXY_H
#define TSSSTYLESHEETPASTEBOARDPROXY_H

@class TSPObject, TSUMutableRetainedPointerSet;
@protocol OS_dispatch_queue;


#import "TSSStylesheet.h"

@interface TSSStylesheetPasteboardProxy : TSPObject {
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    BOOL mSelfArchiving;
}




-(id)initWithContext:(id)arg0 stylesheet:(id)arg1 ;
-(void)addStyleReference:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif