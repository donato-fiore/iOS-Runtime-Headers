// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEACTIVITY_H
#define CLKCOMPLICATIONTEMPLATEACTIVITY_H



#import "CLKComplicationTemplate.h"

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {
    NSInteger _family;
}


@property (nonatomic) CGFloat exercisePercentComplete; // ivar: _exercisePercentComplete
@property (nonatomic, getter=dotsAreHidden) BOOL hideDots; // ivar: _hideDots
@property (nonatomic) CGFloat movePercentComplete; // ivar: _movePercentComplete
@property (nonatomic) CGFloat standPercentComplete; // ivar: _standPercentComplete


+(id)activityTemplateWithFamily:(NSInteger)arg0 ;
-(NSInteger)compatibleFamily;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_enumerateBOOLKeysWithBlock:(id)arg0 ;
-(void)_enumerateFloatKeysWithBlock:(id)arg0 ;


@end


#endif