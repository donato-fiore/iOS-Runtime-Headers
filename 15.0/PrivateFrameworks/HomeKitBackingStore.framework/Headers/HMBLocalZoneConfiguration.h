// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALZONECONFIGURATION_H
#define HMBLOCALZONECONFIGURATION_H

@class HMFObject;
@protocol NSCopying, HMBLocalZoneDelegate;


#import "HMBModelContainer.h"

@interface HMBLocalZoneConfiguration : HMFObject <NSCopying>



@property (nonatomic) BOOL createIfNeeded; // ivar: _createIfNeeded
@property (weak, nonatomic) NSObject<HMBLocalZoneDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HMBModelContainer *modelContainer; // ivar: _modelContainer
@property (nonatomic) BOOL readOnly; // ivar: _readOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif