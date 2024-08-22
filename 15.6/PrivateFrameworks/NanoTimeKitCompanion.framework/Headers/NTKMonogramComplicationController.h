// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKMONOGRAMCOMPLICATIONCONTROLLER_H
#define NTKMONOGRAMCOMPLICATIONCONTROLLER_H

@class NSString;
@protocol NTKTimeTravel, NTKMonogramComplicationDisplay;


#import "NTKComplicationController.h"

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel>

 {
    NSString *_monogramText;
}


@property (readonly, weak, nonatomic) NSObject<NTKMonogramComplicationDisplay> *legacyDisplay;


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)hasTapAction;
-(void)_activate;
-(void)_configureForLegacyDisplay:(id)arg0 ;
-(void)_deactivate;
-(void)_handleMonogramTextReload;
-(void)_reloadMonogramText;
-(void)_updateDisplay;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif