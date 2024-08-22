// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPRIMARYELECTIONFINDPRIMARYMESHOPERATION_H
#define HMDPRIMARYELECTIONFINDPRIMARYMESHOPERATION_H

@class HMFOperation, NSArray, NSSet, HMFFuture, NSString;
@protocol HMFLogging, HMDResidentDeviceManagerContext;



@interface HMDPrimaryElectionFindPrimaryMeshOperation : HMFOperation <HMFLogging>

 {
    NSArray *_results;
    id<HMDResidentDeviceManagerContext> *_context;
    NSSet *_otherResidents;
    HMFFuture *_messagesFuture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *results;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithContext:(id)arg0 otherResidents:(id)arg1 ;
-(id)logIdentifier;
-(void)main;


@end


#endif