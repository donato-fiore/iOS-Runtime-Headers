// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDXPCACTIVITYINTERFACE_H
#define HMDXPCACTIVITYINTERFACE_H

@class HMFObject, NSString;
@protocol HMDXPCActivityInterfacing;



@interface HMDXPCActivityInterface : HMFObject <HMDXPCActivityInterfacing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setState:(NSInteger)arg0 forXPCActivity:(id)arg1 ;
-(NSInteger)stateForXPCActivity:(id)arg0 ;
-(id)criteriaForXPCActivity:(id)arg0 ;
-(void)registerXPCActivityWithActivityIdentifier:(id)arg0 criteria:(id)arg1 activityBlock:(id)arg2 ;
-(void)setCriteria:(id)arg0 forXPCActivity:(id)arg1 ;
-(void)unregisterXPCActivityWithActivityIdentifier:(id)arg0 ;


@end


#endif