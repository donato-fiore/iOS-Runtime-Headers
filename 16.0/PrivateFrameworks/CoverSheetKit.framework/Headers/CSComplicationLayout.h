// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMPLICATIONLAYOUT_H
#define CSCOMPLICATIONLAYOUT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CSComplicationLayout : NSObject

@property (readonly, nonatomic) NSInteger draggedItemInsertionIndex; // ivar: _draggedItemInsertionIndex
@property (readonly, nonatomic) NSDictionary *framesByElement; // ivar: _framesByElement


-(id)_initWithFramesByElement:(id)arg0 draggedItemInsertionIndex:(NSInteger)arg1 ;


@end


#endif