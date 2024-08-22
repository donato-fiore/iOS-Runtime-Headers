// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCKZONEDIFF_H
#define SCKZONEDIFF_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SCKZoneDiff : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs; // ivar: _deletedRecordIDs
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *modifiedRecords; // ivar: _modifiedRecords


-(BOOL)hasSameBaseAsDiff:(id)arg0 ;
-(id)applyToRecords:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithModifiedRecords:(id)arg0 deletedRecordIDs:(id)arg1 ;
-(void)applyToModifyRecordsOperation:(id)arg0 ;


@end


#endif