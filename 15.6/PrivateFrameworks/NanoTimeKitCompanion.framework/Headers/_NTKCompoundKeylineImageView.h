// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKCOMPOUNDKEYLINEIMAGEVIEW_H
#define _NTKCOMPOUNDKEYLINEIMAGEVIEW_H

@class NTKKeylineImageView, UIColor, NSString, UIView<NTKKeylineView>;
@protocol NTKKeylineView;


#import "NTKKeylineTouchable.h"

@interface _NTKCompoundKeylineImageView : NTKKeylineImageView <NTKKeylineView>



@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *overrideColor;
@property (retain, nonatomic) UIView<NTKKeylineView> *secondaryKeylineView; // ivar: _secondaryKeylineView
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;
@property (nonatomic) BOOL usesLegibility;


+(id)keylineWithImage:(id)arg0 secondaryKeylineView:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif