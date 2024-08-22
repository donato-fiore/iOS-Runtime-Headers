// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORECACHECREATEZONEOPERATION_H
#define HMDBACKINGSTORECACHECREATEZONEOPERATION_H

@class NSString;


#import "HMDBackingStoreOperation.h"

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id *creationBlock; // ivar: _creationBlock
@property (retain, nonatomic) NSString *zoneName; // ivar: _zoneName


-(id)initWithZoneName:(id)arg0 creationBlock:(id)arg1 ;
-(id)mainReturningError;


@end


#endif