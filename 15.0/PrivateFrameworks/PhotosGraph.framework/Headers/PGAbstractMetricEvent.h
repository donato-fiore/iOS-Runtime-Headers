// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGABSTRACTMETRICEVENT_H
#define PGABSTRACTMETRICEVENT_H

@class NSString, NSDictionary;
@protocol PLMetricEvent;

#import <Foundation/Foundation.h>


@interface PGAbstractMetricEvent : NSObject <PLMetricEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) Class superclass;


-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif