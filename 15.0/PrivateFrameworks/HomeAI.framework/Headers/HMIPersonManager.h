// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONMANAGER_H
#define HMIPERSONMANAGER_H

@class HMFObject, NSUUID;
@protocol HMIPersonManagerDataSource;



@interface HMIPersonManager : HMFObject

@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (weak, nonatomic) NSObject<HMIPersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (getter=isPersonDataAvailableViaHomeKit) BOOL personDataAvailableViaHomeKit; // ivar: _personDataAvailableViaHomeKit
@property BOOL supportsFaceClassification; // ivar: _supportsFaceClassification


-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 homeUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg0 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg0 ;
-(void)handleRemovedPersonWithUUID:(id)arg0 ;
-(void)handleUpdatedFaceprint:(id)arg0 ;
-(void)handleUpdatedPerson:(id)arg0 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg0 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg0 ;


@end


#endif