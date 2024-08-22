// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHRECORDSINGESTIONOUTCOME_H
#define HKHEALTHRECORDSINGESTIONOUTCOME_H

@class NSString, NSArray, NSError, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHealthRecordsIngestionOutcome : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *analyticsString; // ivar: _analyticsString
@property (readonly, copy, nonatomic) NSArray *perAccountOutcomes; // ivar: _perAccountOutcomes
@property (readonly, copy, nonatomic) NSError *taskError; // ivar: _taskError
@property (readonly, copy, nonatomic) NSNumber *taskRuntime; // ivar: _taskRuntime
@property (readonly, nonatomic) BOOL taskSuccess; // ivar: _taskSuccess


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskSuccess:(BOOL)arg0 taskError:(id)arg1 taskRuntime:(CGFloat)arg2 perAccountOutcomes:(id)arg3 analyticsString:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif