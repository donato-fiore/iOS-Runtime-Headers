// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMUTVTEXTALERTCONTROLLER_H
#define SMUTVTEXTALERTCONTROLLER_H

@class UIAlertController, UIViewController;

#import <Foundation/Foundation.h>


@interface SMUTVTextAlertController : NSObject {
    UIAlertController *_alertController;
}


@property (readonly, nonatomic) UIViewController *viewController;


-(id)initWithTitle:(id)arg0 text:(id)arg1 ;


@end


#endif