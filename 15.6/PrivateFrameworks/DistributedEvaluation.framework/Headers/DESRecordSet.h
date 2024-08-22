// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESRECORDSET_H
#define DESRECORDSET_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DESRecordSet : NSObject <NSSecureCoding>

 {
    id *_dataFetcher;
}


@property (readonly, copy, nonatomic) NSArray *coreDuetEvents; // ivar: _coreDuetEvents
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo; // ivar: _nativeRecordInfo
@property (readonly, copy, nonatomic) NSDictionary *nativeRecords; // ivar: _nativeRecords
@property (readonly, nonatomic) NSDictionary *predicate; // ivar: _predicate


+(BOOL)supportsSecureCoding;
+(id)recordSetWithRecipeType:(id)arg0 nativeRecords:(id)arg1 coreDuetEventsUUIDs:(id)arg2 error:(*id)arg3 ;
+(void)initialize;
-(id)_anyNativeRecordUUID;
-(id)filteredRecordSetWithJSONPredicate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNativeRecords:(id)arg0 nativeRecordInfo:(id)arg1 coreDuetEvents:(id)arg2 ;
-(id)initWithNativeRecords:(id)arg0 nativeRecordInfo:(id)arg1 coreDuetEvents:(id)arg2 predicate:(id)arg3 dataFetcher:(id)arg4 ;
-(id)nativeRecordDataForRecordUUID:(id)arg0 error:(*id)arg1 ;
-(id)nativeRecordInfoForRecordUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif