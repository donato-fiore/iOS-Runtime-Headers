// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRESENCEEVENTMODEL_H
#define HMDPRESENCEEVENTMODEL_H

@class NSNumber, NSString, NSArray;


#import "HMDEventModel.h"

@interface HMDPresenceEventModel : HMDEventModel

@property (retain, nonatomic) NSNumber *activation;
@property (retain, nonatomic) NSString *presenceType;
@property (retain, nonatomic) NSArray *users;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif