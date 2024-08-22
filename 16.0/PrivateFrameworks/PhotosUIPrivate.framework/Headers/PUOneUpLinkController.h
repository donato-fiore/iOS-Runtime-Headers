// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUONEUPLINKCONTROLLER_H
#define PUONEUPLINKCONTROLLER_H

@class NSString, NSArray;
@protocol PUBrowsingViewModelChangeObserver, PUOneUpLinkControllerDelegate;

#import <Foundation/Foundation.h>

#import "PUBrowsingSession.h"

@interface PUOneUpLinkController : NSObject <PUBrowsingViewModelChangeObserver>



@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpLinkControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class linkHelper; // ivar: _linkHelper
@property (retain, nonatomic) NSArray *registeredAssetInteractions; // ivar: _registeredAssetInteractions
@property (retain, nonatomic) NSArray *registeredBrowsingSessionInteractions; // ivar: _registeredBrowsingSessionInteractions
@property (readonly) Class superclass;


-(id)init;
-(void)_registerInteractionsForCurrentBrowsingSession;
-(void)registerInteractionsForCurrentAsset;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif