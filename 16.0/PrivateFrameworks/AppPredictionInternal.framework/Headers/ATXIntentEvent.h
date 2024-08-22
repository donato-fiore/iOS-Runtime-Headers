// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINTENTEVENT_H
#define ATXINTENTEVENT_H

@class ATXAction, NSString, NSDateInterval, INIntent;
@protocol NSSecureCoding, ATXLaunchEventProtocol;

#import <Foundation/Foundation.h>


@interface ATXIntentEvent : NSObject <NSSecureCoding, ATXLaunchEventProtocol>



@property (readonly, copy, nonatomic) ATXAction *action; // ivar: _action
@property (copy, nonatomic) NSString *arg1; // ivar: _arg1
@property (copy, nonatomic) NSString *arg2; // ivar: _arg2
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXIntentEvent:(id)arg0 ;
-(id)endDate;
-(id)init;
-(id)initWithBundleId:(id)arg0 intentType:(id)arg1 dateInterval:(id)arg2 ;
-(id)initWithBundleId:(id)arg0 intentType:(id)arg1 dateInterval:(id)arg2 action:(id)arg3 ;
-(id)initWithBundleId:(id)arg0 intentType:(id)arg1 dateInterval:(id)arg2 intent:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)startDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif