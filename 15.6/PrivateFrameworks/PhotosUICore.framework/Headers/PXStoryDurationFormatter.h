// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYDURATIONFORMATTER_H
#define PXSTORYDURATIONFORMATTER_H

@class NSDateComponentsFormatter;

#import <Foundation/Foundation.h>


@interface PXStoryDurationFormatter : NSObject

@property (readonly, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter; // ivar: _dateComponentsFormatter


-(id)stringFromTimeInterval:(CGFloat)arg0 ;


@end


#endif