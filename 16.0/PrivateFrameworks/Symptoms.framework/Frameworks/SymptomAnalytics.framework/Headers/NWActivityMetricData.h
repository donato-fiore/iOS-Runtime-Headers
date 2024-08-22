// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWACTIVITYMETRICDATA_H
#define NWACTIVITYMETRICDATA_H

@class NSManagedObject, NSData, NSSet;



@interface NWActivityMetricData : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSSet *fragment;


+(id)entityName;


@end


#endif