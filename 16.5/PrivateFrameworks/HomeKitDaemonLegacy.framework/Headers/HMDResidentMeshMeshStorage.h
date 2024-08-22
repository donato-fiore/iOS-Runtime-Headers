// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTMESHMESHSTORAGE_H
#define HMDRESIDENTMESHMESHSTORAGE_H

@class HMFObject, NSMutableDictionary, NSMutableSet, NSDictionary;


#import "HMDResidentMesh.h"
#import "HMDResidentDevice.h"

@interface HMDResidentMeshMeshStorage : HMFObject

@property (retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // ivar: _accessoryListWithLinkQuality
@property (retain, nonatomic) NSMutableSet *accessoryUUIDs; // ivar: _accessoryUUIDs
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSUInteger generationCount; // ivar: _generationCount
@property (copy, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (nonatomic) NSUInteger nestedStatusRequests; // ivar: _nestedStatusRequests
@property (weak, nonatomic) HMDResidentMesh *owner; // ivar: _owner
@property (readonly, nonatomic) HMDResidentDevice *residentDevice; // ivar: _residentDevice


-(id)initWithResidentDevice:(id)arg0 owner:(id)arg1 ;
-(void)_requestStatus;


@end


#endif