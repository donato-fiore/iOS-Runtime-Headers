// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SULOCKOUTVIEWCONTROLLER_H
#define SULOCKOUTVIEWCONTROLLER_H

@class UIImage, NSBundle, NSString;


#import "SUViewController.h"

@interface SULockoutViewController : SUViewController

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSBundle *localizationBundle; // ivar: _localizationBundle
@property (retain, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (retain, nonatomic) NSString *messageTitle; // ivar: _messageTitle


-(id)copyArchivableContext;
-(id)init;
-(void)dealloc;
-(void)loadView;


@end


#endif