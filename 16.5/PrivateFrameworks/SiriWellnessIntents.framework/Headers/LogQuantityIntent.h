// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOGQUANTITYINTENT_H
#define LOGQUANTITYINTENT_H

@class INIntent, NSDate, NSString;



@interface LogQuantityIntent : INIntent

@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSString *quantityIdentifier;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSString *units;
@property (nonatomic) CGFloat value;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif