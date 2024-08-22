// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSLOCATIONOFINTERESTTRANSITION_H
#define CLSLOCATIONOFINTERESTTRANSITION_H

@class NSUUID, NSDateInterval;

#import <Foundation/Foundation.h>


@interface CLSLocationOfInterestTransition : NSObject

@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDateInterval *transitionInterval; // ivar: _transitionInterval
@property (readonly, nonatomic) NSInteger transportationMode; // ivar: _transportationMode


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 transitionInterval:(id)arg1 transportationMode:(NSInteger)arg2 ;


@end


#endif