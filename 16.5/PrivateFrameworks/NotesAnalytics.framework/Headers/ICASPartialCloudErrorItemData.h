// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASPARTIALCLOUDERRORITEMDATA_H
#define ICASPARTIALCLOUDERRORITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASPartialCloudErrorItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSString *errorString; // ivar: _errorString
@property (readonly, nonatomic) NSString *syncableDataType; // ivar: _syncableDataType


+(id)dataName;
-(id)initWithSyncableDataType:(id)arg0 errorCode:(id)arg1 count:(id)arg2 errorString:(id)arg3 ;
-(id)toDict;


@end


#endif