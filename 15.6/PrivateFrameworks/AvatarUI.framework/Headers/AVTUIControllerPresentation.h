// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTUICONTROLLERPRESENTATION_H
#define AVTUICONTROLLERPRESENTATION_H

@class UIViewController, MSMessagesAppViewController;
@protocol AVTUIControllerPresentationDelegate;

#import <Foundation/Foundation.h>


@interface AVTUIControllerPresentation : NSObject

@property (readonly, nonatomic) UIViewController *controller; // ivar: _controller
@property (weak, nonatomic) NSObject<AVTUIControllerPresentationDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) MSMessagesAppViewController *modalMessagesController; // ivar: _modalMessagesController


+(id)pendingGlobalPresentation;
+(id)presentationWithWrappingForController:(id)arg0 ;
+(void)setPendingGlobalPresentation:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)viewWillBeObstructed;


@end


#endif