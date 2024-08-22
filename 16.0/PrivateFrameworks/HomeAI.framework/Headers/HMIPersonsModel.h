// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIPERSONSMODEL_H
#define HMIPERSONSMODEL_H

@class HMFObject, NSString, NSUUID, VNPersonsModel;
@protocol HMFLogging;


#import "HMIPersonsModelSummary.h"

@interface HMIPersonsModel : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExternalLibrary) BOOL externalLibrary; // ivar: _externalLibrary
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID
@property (readonly) HMIPersonsModelSummary *summary;
@property (readonly) Class superclass;
@property (readonly) VNPersonsModel *visionPersonsModel; // ivar: _visionPersonsModel


+(id)logCategory;
-(id)initWithPersonsModel:(id)arg0 homeUUID:(id)arg1 sourceUUID:(id)arg2 externalLibrary:(BOOL)arg3 ;


@end


#endif