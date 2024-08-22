// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIANALYSISSTATEMANAGER_H
#define HMIANALYSISSTATEMANAGER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMIAnalysisStateManagerDelegate;



@interface HMIAnalysisStateManager : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIAnalysisStateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeUUID:(id)arg0 ;
-(id)stateUpdateFromFaceEvents:(id)arg0 ;
-(void)handleRemoteStateUpdate:(id)arg0 ;
-(void)handleRemoteStateUpdate:(id)arg0 completionHandler:(id)arg1 ;
-(void)publishLocalState:(id)arg0 ;


@end


#endif