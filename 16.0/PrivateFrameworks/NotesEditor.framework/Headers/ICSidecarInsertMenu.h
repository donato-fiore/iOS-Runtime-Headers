// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSIDECARINSERTMENU_H
#define ICSIDECARINSERTMENU_H

@class SidecarRequest, UIViewController;

#import <Foundation/Foundation.h>


@interface ICSidecarInsertMenu : NSObject {
    ? services;
    ? activeService;
    ? requestDidFinishObservation;
    ? didReceiveItems;
}


@property (nonatomic, retain) SidecarRequest *activeRequest; // ivar: activeRequest
@property (nonatomic, copy) id *didReceiveItems;
@property (nonatomic, weak) UIViewController *presentingViewController; // ivar: presentingViewController


-(id)init;
-(id)menu;
-(void)cancel;


@end


#endif