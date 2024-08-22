// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMASTERSLIDEMAPPER_H
#define PMMASTERSLIDEMAPPER_H



#import "CMMapper.h"
#import "PDSlideBase.h"

@interface PMMasterSlideMapper : CMMapper {
    PDSlideBase *_slide;
}




-(id)initWithPDSlide:(id)arg0 parent:(id)arg1 ;
-(void)mapMasterGraphicsAt:(id)arg0 withState:(id)arg1 ;


@end


#endif