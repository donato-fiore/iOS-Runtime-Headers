// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONTEMPLATEVIEW_H
#define CDRICHCOMPLICATIONTEMPLATEVIEW_H

@class NSString, CLKComplicationTemplate;
@protocol CDTemplateComplicationDisplay, CDComplicationDisplayObserver;


#import "CDRichComplicationView.h"

@interface CDRichComplicationTemplateView : CDRichComplicationView <CDTemplateComplicationDisplay>



@property (nonatomic) BOOL canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CLKComplicationTemplate *template; // ivar: _template
@property (nonatomic) BOOL templateWantsPlatter; // ivar: _templateWantsPlatter


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(NSUInteger)timelineAnimationFadeTypeOverride;
-(id)complicationTemplate;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setComplicationTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif