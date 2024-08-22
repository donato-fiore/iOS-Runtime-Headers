// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFACTIVITY_H
#define HMFACTIVITY_H

@class NSMutableSet, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, HMFActivityMarking, OS_os_activity, OS_voucher;


#import "HMFObject.h"
#import "HMFLogEventSession.h"
#import "HMFActivity.h"

@interface HMFActivity : HMFObject <HMFLogging, HMFObject, HMFActivityMarking>

 {
    NSObject<OS_os_activity> *_internal;
    NSObject<OS_voucher> *_voucher;
    NSMutableSet *_threadContexts;
    os_unfair_lock_s _lock;
    NSArray *_internalAssertions;
    NSUInteger _startMachTime;
}


@property (readonly) NSUInteger assertions;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy, nonatomic) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEventReportingEnabled) BOOL eventReportingEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMFLogEventSession *logSession; // ivar: _logSession
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly, weak) HMFActivity *parent; // ivar: _parent
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, getter=hasStarted) BOOL started;
@property (readonly) Class superclass;
@property (readonly, getter=isValid) BOOL valid; // ivar: _valid


+(id)bundleIdentifier;
+(id)currentActivity;
+(id)currentActivityForMarking;
+(id)logCategory;
+(void)activityWithName:(id)arg0 block:(id)arg1 ;
+(void)activityWithName:(id)arg0 parent:(id)arg1 assertions:(NSUInteger)arg2 block:(id)arg3 ;
+(void)activityWithName:(id)arg0 parent:(id)arg1 block:(id)arg2 ;
+(void)activityWithName:(id)arg0 parent:(id)arg1 options:(NSUInteger)arg2 block:(id)arg3 ;
+(void)initialize;
+(void)markCurrentActivity;
+(void)markCurrentActivityWithFormat:(id)arg0 ;
+(void)markCurrentActivityWithReason:(id)arg0 ;
-(id)blockWithBlock:(SEL)arg0 ;
-(id)blockWithQualityOfService:(SEL)arg0 block:(NSInteger)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 parent:(id)arg2 assertions:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 parent:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 parent:(id)arg1 ;
-(id)initWithName:(id)arg0 parent:(id)arg1 assertions:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 parent:(id)arg1 options:(NSUInteger)arg2 ;
-(id)logIdentifier;
-(void)begin;
-(void)dealloc;
-(void)enableReportingWithServiceName:(id)arg0 ;
-(void)enableReportingWithServiceName:(id)arg0 rootUUID:(id)arg1 ;
-(void)enableReportingWithServiceName:(id)arg0 uuid:(id)arg1 ;
-(void)end;
-(void)invalidate;
-(void)mark;
-(void)markWithFormat:(id)arg0 ;
-(void)markWithReason:(id)arg0 ;
-(void)performBlock:(id)arg0 ;


@end


#endif