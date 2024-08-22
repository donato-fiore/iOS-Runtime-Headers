// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSFRAMESPECIFIERSREQUEST_H
#define BLSFRAMESPECIFIERSREQUEST_H

@class NSDateInterval, NSDate;

#import <Foundation/Foundation.h>


@interface BLSFrameSpecifiersRequest : NSObject {
    id *_completion;
    os_unfair_lock_s _lock;
    BOOL _lock_completed;
}


@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSDate *previousPresentationDate; // ivar: _previousPresentationDate
@property (readonly, nonatomic) BOOL shouldReset; // ivar: _shouldReset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDateInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 completion:(id)arg3 ;
-(void)completeWithDateSpecifiers:(id)arg0 ;


@end


#endif