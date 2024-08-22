// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCDPLAYABLECONTENTVIEWCONTROLLER_H
#define MCDPLAYABLECONTENTVIEWCONTROLLER_H

@class UINavigationController, NSArray, NSString, NSOperationQueue;
@protocol UINavigationControllerDelegate;


#import "MCDPCModel.h"
#import "MCDPCContainer.h"

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate>

 {
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    BOOL _hasBrowsableContent;
    BOOL _hasSectionedContent;
    BOOL _hasLoaded;
}


@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *modelInvalidationQueue; // ivar: _modelInvalidationQueue
@property (readonly) Class superclass;


-(id)_createRootViewController;
-(id)_createSectionedRootViewController;
-(id)currentStack;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 stack:(id)arg1 ;
-(void)_modelDidInvalidate:(id)arg0 ;
-(void)_nowPlayingIdentifiersChanged:(id)arg0 ;
-(void)_populateStack;
-(void)_setupView;
-(void)refreshNavigationStackForLaunch;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif