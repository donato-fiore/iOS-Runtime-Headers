// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXDNDTRANSITION_H
#define _ATXDNDTRANSITION_H

@class NSString, NSTimeZone, NSDate;
@protocol ATXTimedEventProtocol;

#import <Foundation/Foundation.h>


@interface _ATXDNDTransition : NSObject <ATXTimedEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStartOfDND; // ivar: _isStartOfDND
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) NSDate *transitionTime; // ivar: _transitionTime


-(id)eventTime;
-(id)init;
-(id)initWithTransitionTime:(id)arg0 timeZone:(id)arg1 isStartOfDND:(BOOL)arg2 ;
-(id)prettyRepresentation;


@end


#endif