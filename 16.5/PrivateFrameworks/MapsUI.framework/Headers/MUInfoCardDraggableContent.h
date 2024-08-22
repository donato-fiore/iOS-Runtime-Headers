// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUINFOCARDDRAGGABLECONTENT_H
#define MUINFOCARDDRAGGABLECONTENT_H

@class UIView;
@protocol NSItemProviderWriting;

#import <Foundation/Foundation.h>


@interface MUInfoCardDraggableContent : NSObject

@property (nonatomic) int analyticsTarget; // ivar: _analyticsTarget
@property (retain, nonatomic) NSObject<NSItemProviderWriting> *draggableContent; // ivar: _draggableContent
@property (nonatomic, getter=isHeader) BOOL header; // ivar: _header
@property (retain, nonatomic) UIView *view; // ivar: _view




@end


#endif