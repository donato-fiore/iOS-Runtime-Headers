// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSIDECARINSERTMENU_H
#define ICSIDECARINSERTMENU_H

@class SidecarRequest, UIView, UIViewController;

#import <Foundation/Foundation.h>


@interface ICSidecarInsertMenu : NSObject {
    ? services;
    ? menuDidChange;
    ? activeService;
    ? requestDidFinishObservation;
    ? didReceiveItems;
}


@property (nonatomic, retain) SidecarRequest *activeRequest; // ivar: activeRequest
@property (nonatomic, copy) id *didReceiveItems;
@property (nonatomic, copy) id *menuDidChange;
@property (nonatomic) CGRect presentingSourceRect; // ivar: presentingSourceRect
@property (nonatomic, weak) UIView *presentingSourceView; // ivar: presentingSourceView
@property (nonatomic, weak) UIViewController *presentingViewController; // ivar: presentingViewController


-(id)init;
-(id)menu;
-(void)cancel;
-(void)dealloc;
-(void)sidecarDevicesDidChange:(id)arg0 ;


@end


#endif