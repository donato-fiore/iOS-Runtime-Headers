// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONCRETESETCHANGE_H
#define NSCONCRETESETCHANGE_H



#import "NSSetChange.h"

@interface NSConcreteSetChange : NSSetChange {
    NSUInteger _changeType;
    id *_value;
}




-(NSUInteger)changeType;
-(id)initWithType:(NSUInteger)arg0 object:(id)arg1 ;
-(id)value;
-(void)dealloc;


@end


#endif