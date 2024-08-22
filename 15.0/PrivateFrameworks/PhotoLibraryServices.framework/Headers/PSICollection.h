// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSICOLLECTION_H
#define PSICOLLECTION_H

@class NSDate, NSString;
@protocol NSCopying;


#import "PSIObject.h"
#import "PSIDate.h"
#import "PSIAsset.h"

@interface PSICollection : PSIObject <NSCopying>



@property (readonly) PSIDate *endDate; // ivar: _endDate
@property (copy, nonatomic) PSIAsset *keyAsset; // ivar: _keyAsset
@property (readonly) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly) NSDate *sortDate; // ivar: _sortDate
@property (readonly) PSIDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly) NSUInteger type; // ivar: _type


-(id)_initForCopy:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUUID:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 subtitle:(id)arg4 keyAsset:(id)arg5 type:(NSUInteger)arg6 numberOfAssets:(NSUInteger)arg7 sortDate:(id)arg8 ;


@end


#endif