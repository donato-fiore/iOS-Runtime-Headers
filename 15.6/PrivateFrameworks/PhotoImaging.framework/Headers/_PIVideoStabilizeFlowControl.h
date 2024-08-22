// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PIVIDEOSTABILIZEFLOWCONTROL_H
#define _PIVIDEOSTABILIZEFLOWCONTROL_H

@protocol ICFlowControl;

#import <Foundation/Foundation.h>


@interface _PIVideoStabilizeFlowControl : NSObject <ICFlowControl>



@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) CGFloat rangeMax; // ivar: _rangeMax
@property (nonatomic) CGFloat rangeMin; // ivar: _rangeMin
@property (copy, nonatomic) id *shouldCancelHandler; // ivar: _shouldCancelHandler


-(BOOL)ICShouldBeCanceled;
-(void)ICReportProgress:(float)arg0 ;


@end


#endif