// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTSELECTIONWINDOWAVERAGEDVALUE_H
#define UITEXTSELECTIONWINDOWAVERAGEDVALUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface UITextSelectionWindowAveragedValue : NSObject {
    NSUInteger _depth;
    NSMutableArray *_values;
}




-(CGFloat)windowAveragedValue;
-(id)initWithDepth:(NSUInteger)arg0 ;
-(void)addValue:(CGFloat)arg0 ;
-(void)flushValues;


@end


#endif