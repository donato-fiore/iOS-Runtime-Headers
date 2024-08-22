// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKGROUNDOPERATIONDATASOURCE_H
#define HMDBACKGROUNDOPERATIONDATASOURCE_H

@class HMFObject, NSDictionary;


#import "HMDBackgroundOperationManager.h"

@interface HMDBackgroundOperationDataSource : HMFObject

@property (readonly, weak) HMDBackgroundOperationManager *owner; // ivar: _owner
@property (readonly, copy) NSDictionary *values;


+(id)name;
-(id)initWithOperationManager:(id)arg0 ;
-(void)notifyDataSourceChanged;


@end


#endif