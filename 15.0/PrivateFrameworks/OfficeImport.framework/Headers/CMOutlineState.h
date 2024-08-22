// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMOUTLINESTATE_H
#define CMOUTLINESTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WDList.h"
#import "WDListDefinition.h"

@interface CMOutlineState : NSObject {
    NSMutableArray *_counters;
}


@property (retain) WDList *currentList; // ivar: _currentList
@property (readonly) WDListDefinition *listDefinition; // ivar: _listDefinition


-(NSUInteger)counterAtLevel:(unsigned char)arg0 ;
-(NSUInteger)levelCount;
-(id)init;
-(id)initWithListDefinition:(id)arg0 ;
-(id)levelDescriptionAtIndex:(unsigned char)arg0 ;
-(void)increaseCounterAtLevel:(unsigned char)arg0 ;
-(void)reset;
-(void)setCounterTo:(NSUInteger)arg0 atLevel:(unsigned char)arg1 ;


@end


#endif