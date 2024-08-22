// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALDATABASECONFIGURATION_H
#define HMBLOCALDATABASECONFIGURATION_H

@class HMFObject;
@protocol NSCopying;


#import "HMBModelContainer.h"

@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying>



@property (retain, nonatomic) HMBModelContainer *modelContainer; // ivar: _modelContainer
@property (nonatomic) BOOL readOnly; // ivar: _readOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif