// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUNLOCKEDALERTITEMPRESENTER_H
#define SBUNLOCKEDALERTITEMPRESENTER_H

@class NSString;
@protocol SBAlertItemPresenter;

#import <Foundation/Foundation.h>

#import "SBSharedModalAlertItemPresenter.h"

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter>

 {
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(BOOL)presentsAlertItemsModally;
-(id)initWithSharedModalAlertItemPresenter:(id)arg0 ;
-(void)dismissAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif