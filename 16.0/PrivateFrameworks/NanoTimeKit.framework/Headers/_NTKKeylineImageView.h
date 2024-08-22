// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NTKKEYLINEIMAGEVIEW_H
#define _NTKKEYLINEIMAGEVIEW_H

@class CLKUIColoringImageView, UIColor, NSString;
@protocol NTKKeylineView;


#import "NTKKeylineTouchable.h"

@interface _NTKKeylineImageView : CLKUIColoringImageView <NTKKeylineView>



@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) id *colorizationBlock; // ivar: _colorizationBlock
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKKeylineTouchable *touchable; // ivar: touchable
@property (nonatomic) BOOL usesLegibility;




@end


#endif