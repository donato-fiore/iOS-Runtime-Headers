// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOUNTERSETINTERNAL_H
#define MTLCOUNTERSETINTERNAL_H

@class NSString, NSArray;
@protocol MTLCounterSet;

#import <Foundation/Foundation.h>


@interface MTLCounterSetInternal : NSObject <MTLCounterSet>

 {
    NSString *_description;
}


@property (readonly, copy) NSArray *counters; // ivar: _counters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 description:(id)arg1 counters:(id)arg2 ;
-(void)dealloc;


@end


#endif