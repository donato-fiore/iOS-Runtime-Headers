// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGPICKERAPPEARANCE_H
#define DOCTAGPICKERAPPEARANCE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface DOCTagPickerAppearance : NSObject

@property (readonly) UIColor *cellBackgroundColor;
@property (readonly) NSDirectionalEdgeInsets cellExternalMargins;
@property (readonly) NSDirectionalEdgeInsets cellInteriorLayoutMargins;
@property (readonly) CGFloat cornerRadius;
@property (readonly) CGFloat dotSize;
@property (readonly) BOOL showLeadingDotWhileEditing;
@property (readonly) BOOL useDashedBorderForAddNewTag;




@end


#endif