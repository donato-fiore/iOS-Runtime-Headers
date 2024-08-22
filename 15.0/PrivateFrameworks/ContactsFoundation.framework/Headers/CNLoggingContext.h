// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNLOGGINGCONTEXT_H
#define CNLOGGINGCONTEXT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CNLoggingContext : NSObject {
    *void _aslClient;
    NSObject<OS_dispatch_queue> *_aslQueue;
}


@property (readonly, copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *subsystem; // ivar: _subsystem


+(id)loggingContextWithSubsystem:(id)arg0 category:(id)arg1 ;
-(id)aslQueue;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 ;
-(id)loggingName;
-(struct __asl_object_s *)aslClient;
-(void)setupASL;


@end


#endif