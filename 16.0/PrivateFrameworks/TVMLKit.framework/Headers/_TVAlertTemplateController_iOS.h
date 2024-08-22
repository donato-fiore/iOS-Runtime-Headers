// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVALERTTEMPLATECONTROLLER_IOS_H
#define _TVALERTTEMPLATECONTROLLER_IOS_H

@class UIViewController, NSMutableArray, UIAlertController, NSArray, NSString;


#import "TVImageProxy.h"

@interface _TVAlertTemplateController_iOS : UIViewController {
    NSMutableArray *_additionalLabels;
    UIAlertController *_alertController;
    NSArray *_buttonElements;
    TVImageProxy *_imageProxy;
    CGSize _imageSize;
    NSString *_message;
    NSString *_title;
}




-(void)_dismissAlertControllerAnimated:(BOOL)arg0 ;
-(void)_presentAlertController;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)updateWithTemplateElement:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif