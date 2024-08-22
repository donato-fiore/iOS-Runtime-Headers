// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUEXTENSIONDEVICE_H
#define NUEXTENSIONDEVICE_H

@class NSString, UIViewController, UIScreen;
@protocol NUDevice;

#import <Foundation/Foundation.h>


@interface NUExtensionDevice : NSObject <NUDevice>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, nonatomic, getter=isSplitScreen) BOOL splitScreen;
@property (readonly) Class superclass;


-(id)initWithScreen:(id)arg0 hostViewController:(id)arg1 ;


@end


#endif