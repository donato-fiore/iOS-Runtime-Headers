// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUIMODALCONTROLLER_H
#define PRUIMODALCONTROLLER_H

@class UIWindow, NSString;
@protocol PRUIModalRemoteViewControllerDelegate, PRUIModalEntryPoint, PRUIModalControllerDelegate;

#import <Foundation/Foundation.h>


@interface PRUIModalController : NSObject <PRUIModalRemoteViewControllerDelegate>

 {
    UIWindow *_window;
    id<PRUIModalEntryPoint> *_entryPoint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRUIModalControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEntryPoint:(id)arg0 ;
-(void)modalRemoteViewController:(id)arg0 didDismissWithResponse:(id)arg1 ;
-(void)modalRemoteViewController:(id)arg0 willDismissWithResponse:(id)arg1 ;
-(void)presentFromWindowScene:(id)arg0 ;


@end


#endif