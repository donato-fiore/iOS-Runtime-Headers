// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFIMMEDIATESCHEDULER_H
#define EFIMMEDIATESCHEDULER_H

@class NSString;
@protocol EFScheduler;

#import <Foundation/Foundation.h>


@interface EFImmediateScheduler : NSObject <EFScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)performCancelableBlock:(id)arg0 ;
-(id)performWithObject:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performSyncBarrierBlock:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;
-(void)performVoucherPreservingBlock:(id)arg0 ;


@end


#endif