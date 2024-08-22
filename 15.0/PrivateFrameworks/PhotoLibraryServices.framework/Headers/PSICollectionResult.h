// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSICOLLECTIONRESULT_H
#define PSICOLLECTIONRESULT_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PSIDate.h"

@interface PSICollectionResult : NSObject <NSCopying>



@property (readonly, nonatomic) PSIDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSString *keyAssetUUID; // ivar: _keyAssetUUID
@property (readonly, nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly, copy, nonatomic) NSDate *sortDate; // ivar: _sortDate
@property (readonly, nonatomic) PSIDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUID:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 subtitle:(id)arg4 keyAssetUUID:(id)arg5 type:(NSUInteger)arg6 numberOfAssets:(NSUInteger)arg7 sortDate:(id)arg8 ;


@end


#endif