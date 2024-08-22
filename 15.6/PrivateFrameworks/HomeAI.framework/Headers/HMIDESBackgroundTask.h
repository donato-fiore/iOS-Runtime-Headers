// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIDESBACKGROUNDTASK_H
#define HMIDESBACKGROUNDTASK_H

@class MLBackgroundTask, NSString, NSURL;
@protocol HMFLogging;



@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)scheduleTask:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
+(id)logCategory;
-(id)activityForScheduling;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif