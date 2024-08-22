// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCLOGGEDDATAMETRIC_H
#define HKMCLOGGEDDATAMETRIC_H

@class NSNumber, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HKMCLoggedDataMetric : NSObject

@property (retain, nonatomic) NSNumber *dayIndexLoggingOffset; // ivar: _dayIndexLoggingOffset
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (readonly, nonatomic) NSString *method; // ivar: _method


+(id)eventName;
-(id)description;
-(id)initWithMethod:(id)arg0 ;


@end


#endif