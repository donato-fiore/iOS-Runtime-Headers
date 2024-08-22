// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSLIDEMAPPER_H
#define PMSLIDEMAPPER_H



#import "CMMapper.h"
#import "PDSlide.h"

@interface PMSlideMapper : CMMapper {
    PDSlide *mSlide;
    CGRect mRect;
}




-(id)defaultTheme;
-(id)initWithPDSlide:(id)arg0 slideRect:(struct CGRect )arg1 parent:(id)arg2 ;
-(id)slideName;
-(id)styleMatrix;
-(struct CGRect )slideRect;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBackgroundAt:(id)arg0 recursive:(BOOL)arg1 withState:(id)arg2 ;
-(void)mapDrawablesAt:(id)arg0 withState:(id)arg1 ;
-(void)mapMasterSlideAt:(id)arg0 withState:(id)arg1 ;


@end


#endif