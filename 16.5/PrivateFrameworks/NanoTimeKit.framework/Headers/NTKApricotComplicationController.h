// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKAPRICOTCOMPLICATIONCONTROLLER_H
#define NTKAPRICOTCOMPLICATIONCONTROLLER_H

@class NSMapTable;


#import "NTKComplicationController.h"
#import "NTKApricotComplication.h"

@interface NTKApricotComplicationController : NTKComplicationController {
    NTKApricotComplication *_apricotComplication;
    NSMapTable *_displayWrapperToShowPreview;
}




+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
+(BOOL)_isLegacy;
-(BOOL)hasTapAction;
-(BOOL)showPreviewForDisplayWrapper:(id)arg0 ;
-(BOOL)wantsLegacyDisplay;
-(Class)richComplicationDisplayViewClass;
-(id)complicationApplicationIdentifier;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 face:(id)arg2 slot:(id)arg3 ;
-(void)addDisplayWrapper:(id)arg0 ;
-(void)didTouchUpInsideView:(id)arg0 ;
-(void)removeDisplayWrapper:(id)arg0 ;
-(void)setDataMode:(NSInteger)arg0 forDisplayWrapper:(id)arg1 ;
-(void)setShowPreview:(BOOL)arg0 forDisplayWrapper:(id)arg1 ;


@end


#endif