// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUAUDIOUNITVIEWSERVICE_H
#define AUAUDIOUNITVIEWSERVICE_H

@class UIViewController, AURemoteExtensionContext;



@interface AUAudioUnitViewService : UIViewController {
    UIViewController *_auViewController;
}


@property AURemoteExtensionContext *auRemoteExtensionContext; // ivar: _auRemoteExtensionContext


-(struct CGSize )determineViewSize:(id)arg0 ;
-(void)connectChildView;
-(void)dealloc;
-(void)initializeBlankView;
-(void)loadView;
-(void)markViewForRedraw:(id)arg0 ;
-(void)resizeWindow:(id)arg0 size:(struct CGSize )arg1 ;
-(void)setAUContainerViewConstraints:(id)arg0 childView:(id)arg1 auViewSize:(struct CGSize )arg2 ;


@end


#endif