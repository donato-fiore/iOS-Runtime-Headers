// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSTATE_H
#define PLSTATE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PLState : NSObject

@property (retain) id *currValue; // ivar: _currValue
@property (readonly) NSString *entryKey; // ivar: _entryKey
@property (retain) id *lastValue; // ivar: _lastValue
@property (retain) NSDate *stateChangeTime; // ivar: _stateChangeTime
@property (readonly) NSUInteger stateId; // ivar: _stateId


+(void)load;
-(BOOL)updateWithEntry:(id)arg0 ;
-(BOOL)updateWithValue:(id)arg0 ;
-(id)initWithStateId:(NSUInteger)arg0 entryKey:(id)arg1 currValue:(id)arg2 ;
-(void)updateWithLastEntry;


@end


#endif