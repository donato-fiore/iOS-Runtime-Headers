// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSFRAMESPECIFIERSREQUESTACTION_H
#define BLSFRAMESPECIFIERSREQUESTACTION_H

@class BSAction, NSDateInterval, NSDate;



@interface BLSFrameSpecifiersRequestAction : BSAction

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDate *previousPresentationDate;
@property (readonly, nonatomic) BOOL shouldReset;


-(id)initWithDateInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif