// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FMIMMEDIATESCHEDULER_H
#define _FMIMMEDIATESCHEDULER_H

@class NSString;
@protocol FMScheduler;

#import <Foundation/Foundation.h>


@interface _FMImmediateScheduler : NSObject <FMScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;


@end


#endif