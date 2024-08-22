// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSCRUBBERSEEKREQUEST_H
#define PXSCRUBBERSEEKREQUEST_H

@class NSDate;
@protocol PXVideoScrubberControllerTarget;

#import <Foundation/Foundation.h>


@interface PXScrubberSeekRequest : NSObject

@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (nonatomic) CGFloat seekTime; // ivar: _seekTime
@property (weak, nonatomic) NSObject<PXVideoScrubberControllerTarget> *target; // ivar: _target


-(id)init;
-(id)initWithTarget:(id)arg0 seekTime:(CGFloat)arg1 ;


@end


#endif