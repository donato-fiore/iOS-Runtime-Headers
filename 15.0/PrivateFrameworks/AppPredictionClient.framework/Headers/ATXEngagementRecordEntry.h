// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXENGAGEMENTRECORDENTRY_H
#define ATXENGAGEMENTRECORDENTRY_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXExecutableIdentifier.h"

@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *dateEngaged; // ivar: _dateEngaged
@property (readonly, nonatomic) NSUInteger engagementRecordType; // ivar: _engagementRecordType
@property (readonly, nonatomic) ATXExecutableIdentifier *executable; // ivar: _executable


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExecutable:(id)arg0 dateEngaged:(id)arg1 engagementRecordType:(NSUInteger)arg2 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif