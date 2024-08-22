// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKPLACECARDDRAGGABLECONTENT_H
#define _MKPLACECARDDRAGGABLECONTENT_H

@class UIView;
@protocol NSItemProviderWriting;

#import <Foundation/Foundation.h>


@interface _MKPlaceCardDraggableContent : NSObject

@property (nonatomic) int analyticsTarget; // ivar: _analyticsTarget
@property (retain, nonatomic) NSObject<NSItemProviderWriting> *draggableContent; // ivar: _draggableContent
@property (nonatomic, getter=isHeader) BOOL header; // ivar: _header
@property (retain, nonatomic) UIView *view; // ivar: _view




@end


#endif