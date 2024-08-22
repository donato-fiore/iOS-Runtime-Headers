// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIWIDGETHEADERBAR_H
#define PXUIWIDGETHEADERBAR_H

@class NSString;
@protocol PXUIWidgetHeaderViewDelegate;


#import "PXUIWidgetBar.h"

@interface PXUIWidgetHeaderBar : PXUIWidgetBar <PXUIWidgetHeaderViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)viewHeight;
-(id)createView;
-(void)setCaption:(id)arg0 ;
-(void)setDisclosureTitle:(id)arg0 ;
-(void)setSpec:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)updateView;
-(void)widgetHeaderView:(id)arg0 didSelectCaption:(id)arg1 ;
-(void)widgetHeaderView:(id)arg0 didSelectSubtitle:(id)arg1 ;


@end


#endif