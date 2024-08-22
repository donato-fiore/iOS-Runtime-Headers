// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETAMBIGUOUSDISTANCEINTENT_H
#define GETAMBIGUOUSDISTANCEINTENT_H

@class INIntent, NSDate;



@interface GetAmbiguousDistanceIntent : INIntent

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *startDate;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif