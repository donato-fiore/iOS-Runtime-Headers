// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPSTATICANIMATABLEPROPERTY_H
#define POPSTATICANIMATABLEPROPERTY_H



#import "POPAnimatableProperty.h"

@interface POPStaticAnimatableProperty : POPAnimatableProperty {
    *? _state;
}




-(CGFloat)threshold;
-(id)name;
-(id)readBlock:(SEL)arg0 ;
-(id)writeBlock:(SEL)arg0 ;


@end


#endif