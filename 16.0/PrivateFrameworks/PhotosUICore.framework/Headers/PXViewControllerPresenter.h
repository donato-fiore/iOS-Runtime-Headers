// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVIEWCONTROLLERPRESENTER_H
#define PXVIEWCONTROLLERPRESENTER_H

@class UIViewController, NSString;
@protocol PXPresentationEnvironment, UIPopoverPresentationControllerSourceItem;

#import <Foundation/Foundation.h>


@interface PXViewControllerPresenter : NSObject <PXPresentationEnvironment>



@property (retain, nonatomic) UIViewController *baseViewController; // ivar: _baseViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *sourceItem; // ivar: _sourceItem
@property (readonly) Class superclass;


+(id)defaultPresenterWithViewController:(id)arg0 ;
+(id)popoverPresenterWithViewController:(id)arg0 sourceItem:(id)arg1 ;
-(id)presentAlertWithConfigurationHandler:(id)arg0 ;
-(void)dismissAlertWithToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)dismissViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentViewController:(id)arg0 ;


@end


#endif