// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPPLACEHOLDERANIMATABLEPROPERTY_H
#define POPPLACEHOLDERANIMATABLEPROPERTY_H

@class NSString;


#import "POPAnimatableProperty.h"

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty {
    NSString *name;
    id *readBlock;
    id *writeBlock;
    CGFloat threshold;
}




-(CGFloat)threshold;
-(id)name;
-(id)readBlock:(SEL)arg0 ;
-(id)writeBlock:(SEL)arg0 ;


@end


#endif