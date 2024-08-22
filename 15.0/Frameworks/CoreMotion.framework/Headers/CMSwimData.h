// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSWIMDATA_H
#define CMSWIMDATA_H

@class NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSwimData : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSUInteger fStrokeCount;
    CGFloat fDistance;
    CGFloat fAvgPace;
    NSUInteger fLapCount;
    NSInteger fStrokeType;
    NSUInteger fSegment;
}


@property (readonly, nonatomic) CGFloat avgPace;
@property (readonly, nonatomic) CGFloat distance;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUInteger lapCount;
@property (readonly, nonatomic) NSUInteger recordId;
@property (readonly, nonatomic) NSUInteger segment;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSUInteger strokeCount;
@property (readonly, nonatomic) NSInteger strokeType;


+(BOOL)supportsSecureCoding;
+(NSUInteger)maxSwimDataEntries;
+(id)strokeTypeName:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(NSUInteger)arg0 sourceId:(id)arg1 sessionId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 strokeCount:(NSUInteger)arg5 distance:(CGFloat)arg6 avgPace:(CGFloat)arg7 lapCount:(NSUInteger)arg8 strokeType:(NSInteger)arg9 segment:(NSUInteger)arg10 ;
-(id)initWithSessionId:(id)arg0 ;
-(id)initWithSwimEntry:(struct CLSwimEntry *)arg0 ;
-(void)convertToSwimEntry:(struct CLSwimEntry *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif