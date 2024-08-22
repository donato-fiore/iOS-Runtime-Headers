// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSBACKGROUNDCONTENTVIEW_H
#define CSBACKGROUNDCONTENTVIEW_H

@class UIView, NSString, UIView<UIScenePresentation>;
@protocol CSWallpaperView;



@interface CSBackgroundContentView : UIView <CSWallpaperView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView; // ivar: _presentationView
@property (readonly) Class superclass;


-(id)initWithPresentationView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)setCoverSheetWallpaperStyle:(NSInteger)arg0 ;
-(void)setFullscreen:(BOOL)arg0 ;


@end


#endif