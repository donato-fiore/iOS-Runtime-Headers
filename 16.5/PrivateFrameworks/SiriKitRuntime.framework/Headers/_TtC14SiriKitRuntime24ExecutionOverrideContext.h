// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRIKITRUNTIME24EXECUTIONOVERRIDECONTEXT_H
#define _TTC14SIRIKITRUNTIME24EXECUTIONOVERRIDECONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC14SiriKitRuntime24ExecutionOverrideContext : NSObject <NSSecureCoding>

 {
    ? activeTasks;
    ? executedTasks;
    ? isTriggerlessFollowup;
    ? isMitigated;
    ? endpointMode;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif