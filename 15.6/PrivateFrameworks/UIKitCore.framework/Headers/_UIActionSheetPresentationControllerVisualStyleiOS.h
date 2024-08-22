// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIONSHEETPRESENTATIONCONTROLLERVISUALSTYLEIOS_H
#define _UIACTIONSHEETPRESENTATIONCONTROLLERVISUALSTYLEIOS_H

@class NSString;
@protocol UIActionSheetPresentationControllerVisualStyle;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIActionSheetiOSDismissActionView.h"

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle>



@property (readonly) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UIColor *dimmingViewColor;
@property (retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView; // ivar: _dismissActionView
@property (readonly) CGFloat dismissToContentSpacing;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(struct UIEdgeInsets )contentInsetsForContainerView:(id)arg0 ;


@end


#endif