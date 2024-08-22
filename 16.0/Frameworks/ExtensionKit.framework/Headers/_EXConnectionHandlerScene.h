// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXCONNECTIONHANDLERSCENE_H
#define _EXCONNECTIONHANDLERSCENE_H

@class NSString, UIViewController;
@protocol _EXViewControllerScene;

#import <Foundation/Foundation.h>


@interface _EXConnectionHandlerScene : NSObject <_EXViewControllerScene>



@property (readonly, copy) NSString *debugDescription;
@property (retain) id *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) UIViewController *viewController; // ivar: _viewController


-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(void)connectToSession:(id)arg0 ;


@end


#endif