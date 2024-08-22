// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASELEMENTVIEWCONTROLLER_H
#define VIDEOSEXTRASELEMENTVIEWCONTROLLER_H

@class UIViewController, NSMapTable;


#import "VideosExtrasBackgroundViewController.h"

@interface VideosExtrasElementViewController : UIViewController {
    VideosExtrasBackgroundViewController *_backgroundViewController;
    NSMapTable *_bannerButtonMap;
}


@property (nonatomic, getter=isWide) BOOL wide; // ivar: _wide


+(id)_borderView;
-(NSUInteger)extrasSize;
-(id)_installBackdrop:(id)arg0 ;
-(id)backgroundViewController;
-(id)init;
-(void)_configureBannerWithElement:(id)arg0 ;
-(void)_didActivateButtonWithItem:(id)arg0 ;
-(void)_prepareLayout;
-(void)_startBackgroundAudio;
-(void)configureBackgroundWithElements:(id)arg0 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif