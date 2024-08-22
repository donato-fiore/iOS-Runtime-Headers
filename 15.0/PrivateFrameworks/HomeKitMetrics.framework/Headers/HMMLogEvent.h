// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMLOGEVENT_H
#define HMMLOGEVENT_H

@class NSDate, NSError;

#import <Foundation/Foundation.h>


@interface HMMLogEvent : NSObject

@property (readonly) CGFloat durationInMilliseconds;
@property (copy) NSDate *endDate; // ivar: _endDate
@property (copy) NSError *error; // ivar: _error
@property (copy) NSDate *startDate; // ivar: _startDate
@property (nonatomic, getter=isSubmitted) BOOL submitted; // ivar: _submitted


+(id)alloc;
-(BOOL)shouldSubmit;
-(id)init;
-(void)submitAtDate:(id)arg0 ;


@end


#endif