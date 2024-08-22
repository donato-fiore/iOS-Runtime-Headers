// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETHEALTHQUANTITYINTENT_H
#define GETHEALTHQUANTITYINTENT_H

@class INIntent, NSDate, NSString;



@interface GetHealthQuantityIntent : INIntent

@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSString *quantityIdentifier;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSString *unit;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif