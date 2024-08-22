// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVLOADINGIMAGEVIEW_H
#define _TVLOADINGIMAGEVIEW_H

@class UIView, NSString;
@protocol TVAuxiliaryViewSelecting;



@interface _TVLoadingImageView : UIView <TVAuxiliaryViewSelecting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_fadeInFadeOut;


@end


#endif