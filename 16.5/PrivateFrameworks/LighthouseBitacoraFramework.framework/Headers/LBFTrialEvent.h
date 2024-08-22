// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFTRIALEVENT_H
#define LBFTRIALEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface LBFTrialEvent : NSObject

@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSNumber *succeeded; // ivar: _succeeded


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithActivation:(BOOL)arg0 ;
-(id)initWithAllocation:(BOOL)arg0 ;
-(id)initWithDeactivation:(BOOL)arg0 ;


@end


#endif