// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSCENEHUD_H
#define PUPHOTOSCENEHUD_H

@class UIView, PXHUDView, NSURL;



@interface PUPhotoSceneHUD : UIView

@property (readonly, nonatomic) PXHUDView *hudView; // ivar: _hudView
@property (readonly, nonatomic) NSURL *mdataURL; // ivar: _mdataURL


-(id)initWithPhoto:(id)arg0 ;
-(void)update;


@end


#endif