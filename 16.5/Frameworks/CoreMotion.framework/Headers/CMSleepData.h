// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSLEEPDATA_H
#define CMSLEEPDATA_H

@class NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSleepData : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fEventTime;
    NSInteger fEventType;
}


@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) NSInteger eventType;
@property (readonly, nonatomic) NSUInteger recordId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;


+(BOOL)supportsSecureCoding;
+(id)eventTypeName:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(NSUInteger)arg0 sourceId:(id)arg1 sessionId:(id)arg2 eventTime:(id)arg3 eventType:(NSInteger)arg4 ;
-(id)initWithSessionId:(id)arg0 ;
-(id)initWithSpringEntry:(struct CLSpringTrackerEntry *)arg0 ;
-(void)convertToSpringTrackerEntry:(struct CLSpringTrackerEntry *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif