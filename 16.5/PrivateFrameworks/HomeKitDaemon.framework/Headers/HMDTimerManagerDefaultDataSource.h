// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMERMANAGERDEFAULTDATASOURCE_H
#define HMDTIMERMANAGERDEFAULTDATASOURCE_H

@class NSString;
@protocol HMDTimerManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDTimerManagerDefaultDataSource : NSObject <HMDTimerManagerDataSource>



@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;


@end


#endif