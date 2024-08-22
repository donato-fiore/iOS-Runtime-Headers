// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSLAYOUTRECTOBSERVABLE_H
#define _NSLAYOUTRECTOBSERVABLE_H

@class NSObservationSource, NSArray;
@protocol NSLayoutItem;


#import "NSLayoutRect.h"

@interface _NSLayoutRectObservable : NSObservationSource {
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id<NSLayoutItem> *_layoutItem;
}




+(id)observableForRect:(id)arg0 inItem:(id)arg1 ;
-(void)dealloc;


@end


#endif