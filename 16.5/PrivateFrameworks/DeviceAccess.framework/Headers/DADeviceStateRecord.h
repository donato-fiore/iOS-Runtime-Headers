// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADEVICESTATERECORD_H
#define DADEVICESTATERECORD_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface DADeviceStateRecord : NSObject

@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) NSNumber *time; // ivar: _time


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithState:(id)arg0 andTime:(id)arg1 ;
-(id)stateTransitionAsString:(id)arg0 ;
-(id)timeIntervelBetweenState:(id)arg0 ;


@end


#endif