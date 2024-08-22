// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUICKTYPEPFLBACKGROUNDTASK_H
#define QUICKTYPEPFLBACKGROUNDTASK_H

@class MLBackgroundTask, NSURL;



@interface QuickTypePFLBackgroundTask : MLBackgroundTask

@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)activityForScheduling;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif