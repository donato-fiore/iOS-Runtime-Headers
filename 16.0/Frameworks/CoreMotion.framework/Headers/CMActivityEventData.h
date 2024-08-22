// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMACTIVITYEVENTDATA_H
#define CMACTIVITYEVENTDATA_H

@class NSString, NSDate;
@protocol SRSampling, SRSampleExporting, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMActivityEventData : NSObject <SRSampling, SRSampleExporting, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger workoutType; // ivar: _workoutType


+(BOOL)supportsSecureCoding;
+(id)actionName:(NSInteger)arg0 ;
+(id)eventTypeName:(NSInteger)arg0 ;
+(id)reasonName:(NSInteger)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 eventType:(NSInteger)arg1 action:(NSInteger)arg2 reason:(NSInteger)arg3 workoutType:(NSInteger)arg4 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif