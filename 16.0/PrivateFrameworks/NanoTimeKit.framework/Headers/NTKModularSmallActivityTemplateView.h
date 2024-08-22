// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKMODULARSMALLACTIVITYTEMPLATEVIEW_H
#define NTKMODULARSMALLACTIVITYTEMPLATEVIEW_H

@class NSMutableArray;


#import "NTKModularTemplateView.h"
#import "NTKRingsAndDotsView.h"

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureContentSubviews;
-(void)_layoutContentView;
-(void)_setLayoutEmptyRings;
-(void)_update;
-(void)applyColorScheme:(id)arg0 ;
-(void)setForegroundColor:(id)arg0 ;
-(void)setIsXL:(BOOL)arg0 ;


@end


#endif