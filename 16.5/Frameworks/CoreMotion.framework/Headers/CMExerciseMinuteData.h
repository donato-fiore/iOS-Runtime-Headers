// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMEXERCISEMINUTEDATA_H
#define CMEXERCISEMINUTEDATA_H

@class NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMExerciseMinuteData : NSObject <NSSecureCoding, NSCopying>

 {
    NSInteger fRecordId;
    CGFloat fStartDate;
    NSUUID *fSourceId;
}


@property (readonly, nonatomic) NSInteger recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
+(id)maxExerciseMinuteDataEntries;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(CGFloat)arg0 recordId:(NSInteger)arg1 sourceId:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif