// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUDIOANALYSISEVENTBULLETIN_H
#define HMAUDIOANALYSISEVENTBULLETIN_H

@class NSUUID, NSArray, NSDate, NSString;
@protocol HMFLogging, HMFObject;

#import <Foundation/Foundation.h>


@interface HMAudioAnalysisEventBulletin : NSObject <HMFLogging, HMFObject>



@property (readonly, copy) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSDate *startDate; // ivar: _startDate
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)initWithProto:(id)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccessoryIdentifier:(id)arg0 homeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 reason:(NSUInteger)arg4 state:(NSUInteger)arg5 ;
-(id)proto;


@end


#endif