// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFLINKREDIRECTIONVIEWCONTROLLER_H
#define SFLINKREDIRECTIONVIEWCONTROLLER_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;


#import "SFSafariViewController.h"

@interface SFLinkRedirectionViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithURL:(id)arg0 ;
-(void)remoteViewController:(id)arg0 didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2 ;
-(void)setDefersAddingRemoteViewController:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif