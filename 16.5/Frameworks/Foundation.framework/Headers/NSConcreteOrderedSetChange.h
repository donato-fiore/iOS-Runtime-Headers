// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETEORDEREDSETCHANGE_H
#define NSCONCRETEORDEREDSETCHANGE_H



#import "NSOrderedSetChange.h"

@interface NSConcreteOrderedSetChange : NSOrderedSetChange {
    NSUInteger _changeType;
    NSUInteger _sourceIndex;
    NSUInteger _destinationIndex;
    id *_value;
}




-(NSUInteger)changeType;
-(NSUInteger)destinationIndex;
-(NSUInteger)sourceIndex;
-(id)initWithType:(NSUInteger)arg0 sourceIndex:(NSUInteger)arg1 destinationIndex:(NSUInteger)arg2 value:(id)arg3 ;
-(id)value;
-(void)dealloc;


@end


#endif