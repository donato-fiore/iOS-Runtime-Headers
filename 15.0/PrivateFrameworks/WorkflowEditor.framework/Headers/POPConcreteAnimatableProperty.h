// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPCONCRETEANIMATABLEPROPERTY_H
#define POPCONCRETEANIMATABLEPROPERTY_H

@class NSString;


#import "POPAnimatableProperty.h"

@interface POPConcreteAnimatableProperty : POPAnimatableProperty {
    NSString *name;
    id *readBlock;
    id *writeBlock;
    CGFloat threshold;
}




-(CGFloat)threshold;
// -(id)initWithName:(id)arg0 readBlock:(id)arg1 writeBlock:(unk)arg2 threshold:(id)arg3  ;
-(id)name;
-(id)readBlock:(SEL)arg0 ;
-(id)writeBlock:(SEL)arg0 ;


@end


#endif