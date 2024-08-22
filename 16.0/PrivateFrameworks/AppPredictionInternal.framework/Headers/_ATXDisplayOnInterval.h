// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXDISPLAYONINTERVAL_H
#define _ATXDISPLAYONINTERVAL_H

@class NSString, NSDateInterval;
@protocol ATXTimedEventProtocol;

#import <Foundation/Foundation.h>


@interface _ATXDisplayOnInterval : NSObject <ATXTimedEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateInterval *onInterval; // ivar: _onInterval
@property (readonly) Class superclass;


-(id)eventTime;
-(id)init;
-(id)initWithOnInterval:(id)arg0 ;
-(id)prettyRepresentation;


@end


#endif