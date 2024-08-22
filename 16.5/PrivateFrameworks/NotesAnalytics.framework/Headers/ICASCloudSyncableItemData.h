// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCLOUDSYNCABLEITEMDATA_H
#define ICASCLOUDSYNCABLEITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASCloudSyncableItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, nonatomic) NSString *syncableDataType; // ivar: _syncableDataType


+(id)dataName;
-(id)initWithSyncableDataType:(id)arg0 count:(id)arg1 ;
-(id)toDict;


@end


#endif