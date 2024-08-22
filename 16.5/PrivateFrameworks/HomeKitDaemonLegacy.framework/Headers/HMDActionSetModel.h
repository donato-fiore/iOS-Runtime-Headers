// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACTIONSETMODEL_H
#define HMDACTIONSETMODEL_H

@class NSDate, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDActionSetModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDate *lastExecutionDate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;


+(id)properties;


@end


#endif