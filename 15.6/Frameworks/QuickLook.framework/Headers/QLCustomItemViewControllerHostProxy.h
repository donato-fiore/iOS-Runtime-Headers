// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLCUSTOMITEMVIEWCONTROLLERHOSTPROXY_H
#define QLCUSTOMITEMVIEWCONTROLLERHOSTPROXY_H

@class NSString;
@protocol QLCustomItemViewControllerHost;

#import <Foundation/Foundation.h>


@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLCustomItemViewControllerHost> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dismissQuickLook;
-(void)forwardMessageToHostOfCustomViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentShareSheetWithPopoverTracker:(id)arg0 customSharedURL:(id)arg1 dismissCompletion:(id)arg2 ;
-(void)setFullScreen:(BOOL)arg0 ;


@end


#endif