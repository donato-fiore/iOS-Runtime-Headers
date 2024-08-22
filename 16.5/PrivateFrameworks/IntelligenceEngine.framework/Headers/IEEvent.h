// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IEEVENT_H
#define IEEVENT_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "IENLParameters.h"

@interface IEEvent : NSObject

@property (retain, nonatomic) NSString *eventId; // ivar: _eventId
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *parsers; // ivar: _parsers
@property (retain, nonatomic) IENLParameters *producer; // ivar: _producer
@property (retain, nonatomic) NSDictionary *slots; // ivar: _slots


-(id)initWithId:(id)arg0 ;
-(id)initWithId:(id)arg0 withName:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 withId:(id)arg1 ;


@end


#endif