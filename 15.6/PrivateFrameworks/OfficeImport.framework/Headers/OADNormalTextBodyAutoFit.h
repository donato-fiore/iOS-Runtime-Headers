// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADNORMALTEXTBODYAUTOFIT_H
#define OADNORMALTEXTBODYAUTOFIT_H



#import "OADTextBodyAutoFit.h"

@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)fontScalePercent;
-(float)lineSpacingReductionPercent;
-(id)description;
-(id)initWithFontScalePercent:(float)arg0 lineSpacingReductionPercent:(float)arg1 ;


@end


#endif