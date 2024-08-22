// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPERSONDATABATCHCHANGE_H
#define HMDPERSONDATABATCHCHANGE_H

@class HMFObject, NSUUID, NSString, HMBLocalZoneLocalInput;
@protocol HMFLogging;



@interface HMDPersonDataBatchChange : HMFObject <HMFLogging>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalZoneLocalInput *localInput; // ivar: _localInput
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithLocalInput:(id)arg0 ;
-(id)logIdentifier;
-(void)addOrUpdateFaceCrop:(id)arg0 ;
-(void)addOrUpdatePerson:(id)arg0 ;
-(void)commit;
-(void)removeFaceCropWithUUID:(id)arg0 ;
-(void)removePersonWithUUID:(id)arg0 ;


@end


#endif