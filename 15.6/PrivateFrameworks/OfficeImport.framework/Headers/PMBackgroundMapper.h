// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMBACKGROUNDMAPPER_H
#define PMBACKGROUNDMAPPER_H



#import "CMMapper.h"
#import "OADBackground.h"

@interface PMBackgroundMapper : CMMapper {
    OADBackground *mBackground;
}




-(id)initWithOadBackground:(id)arg0 parent:(id)arg1 ;
-(struct CGRect )slideRect;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif