// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTECONTENTINLINEMANAGER_H
#define CSREMOTECONTENTINLINEMANAGER_H

@class NSString;
@protocol CSRemoteContentInlineProvidingManager, CSItemDestination, CSRemoteContentInlineProviding;

#import <Foundation/Foundation.h>

#import "CSRemoteContentInlineViewController.h"
#import "CSAdjunctListItem.h"

@interface CSRemoteContentInlineManager : NSObject <CSRemoteContentInlineProvidingManager>

 {
    id<CSItemDestination> *_itemDestination;
    CSRemoteContentInlineViewController *_remoteInlineViewController;
    CSAdjunctListItem *_item;
    BOOL _inlineRemoteContentHidden;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInlineRemoteContentHidden) BOOL inlineRemoteContentHidden;
@property (readonly, nonatomic) BOOL isInlineRemoteContentVisible;
@property (weak, nonatomic) NSObject<CSRemoteContentInlineProviding> *remoteContentInlineProvider; // ivar: _remoteContentInlineProvider
@property (readonly) Class superclass;


-(id)initWithItemDestination:(id)arg0 ;
-(void)_presentInlineRemoteContent:(id)arg0 animatePresentation:(BOOL)arg1 retryOnFailure:(BOOL)arg2 ;
-(void)dealloc;
-(void)presentInlineRemoteContent:(id)arg0 animatePresentation:(BOOL)arg1 ;
-(void)removeInlineRemoteContentWithAnimatedDismissal:(BOOL)arg0 ;


@end


#endif