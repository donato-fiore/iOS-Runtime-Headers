// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMODERNTRANSPORTMESSAGECONTEXTMANAGER_H
#define HMDMODERNTRANSPORTMESSAGECONTEXTMANAGER_H

@class HMFObject, NSMutableDictionary, NSString;
@protocol HMDModernTransportMessageContextFactory, HMFLogging;



@interface HMDModernTransportMessageContextManager : HMFObject <HMDModernTransportMessageContextFactory, HMFLogging>



@property (readonly, nonatomic) NSMutableDictionary *contexts; // ivar: _contexts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<HMDModernTransportMessageContextFactory> *factory; // ivar: _factory
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)contextForIdentifier:(id)arg0 ;
// -(id)contextWithMessage:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 dateProvider:(unk)arg3 timerProvider:(id)arg4  ;
// -(id)createContextWithMessage:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 dateProvider:(unk)arg3 timerProvider:(id)arg4  ;
-(id)init;
-(id)initWithFactory:(id)arg0 ;
-(void)completeContext:(id)arg0 withPayload:(id)arg1 error:(id)arg2 isFinal:(BOOL)arg3 ;


@end


#endif