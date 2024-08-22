// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSEYMOURBEHAVIORCONTEXT_H
#define AVSEYMOURBEHAVIORCONTEXT_H

@class NSString;
@protocol AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext;

#import <Foundation/Foundation.h>

#import "AVPlayerViewController.h"

@interface AVSeymourBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext>



@property (weak, nonatomic) id *behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSEdgeInsets legibleContentInsets; // ivar: _legibleContentInsets
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly) Class superclass;


-(id)initWithAVKitOwner:(id)arg0 ;
-(void)_updateLegibleContentInsets;
-(void)didAddBehavior:(id)arg0 ;
-(void)didRemoveBehavior:(id)arg0 ;
-(void)hidePlaybackControlsImmediately;
-(void)seymourBehaviorContextDidReceiveButtonTap:(id)arg0 ;
-(void)viewDidLoad;
-(void)willAddBehavior:(id)arg0 ;
-(void)willRemoveBehavior:(id)arg0 ;


@end


#endif