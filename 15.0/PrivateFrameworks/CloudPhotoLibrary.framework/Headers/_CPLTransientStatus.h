// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPLTRANSIENTSTATUS_H
#define _CPLTRANSIENTSTATUS_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "CPLRecordChange.h"
#import "CPLRecordStatus.h"

@interface _CPLTransientStatus : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly, nonatomic) CPLRecordChange *record; // ivar: _record
@property (readonly, nonatomic) CPLRecordStatus *status;


-(id)initWithRecord:(id)arg0 generation:(NSUInteger)arg1 date:(id)arg2 ;


@end


#endif