// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIWIDGETFOOTERBAR_H
#define PXUIWIDGETFOOTERBAR_H

@class NSString;
@protocol PXUIWidgetFooterViewDelegate;


#import "PXUIWidgetBar.h"

@interface PXUIWidgetFooterBar : PXUIWidgetBar <PXUIWidgetFooterViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)viewHeight;
-(id)createView;
-(void)setDisclosureTitle:(id)arg0 ;
-(void)setSpec:(id)arg0 ;
-(void)updateView;
-(void)widgetFooterView:(id)arg0 didSelectDisclosure:(id)arg1 ;


@end


#endif