// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIASSOCIATEFACECROPSOPERATION_H
#define HMIASSOCIATEFACECROPSOPERATION_H

@class HMFOperation, NSSet, NSUUID;
@protocol HMIHomePersonManagerDataSource;



@interface HMIAssociateFaceCropsOperation : HMFOperation

@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSSet *faceCropUUIDs; // ivar: _faceCropUUIDs
@property (readonly, copy) NSUUID *personUUID; // ivar: _personUUID
@property (readonly) NSInteger source; // ivar: _source


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 faceCropUUIDs:(id)arg1 personUUID:(id)arg2 source:(NSInteger)arg3 ;
-(void)main;
-(void)mainInsideAutoreleasePool;


@end


#endif