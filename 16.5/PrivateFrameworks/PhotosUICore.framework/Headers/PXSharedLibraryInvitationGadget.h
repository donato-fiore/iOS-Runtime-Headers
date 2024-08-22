// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYINVITATIONGADGET_H
#define PXSHAREDLIBRARYINVITATIONGADGET_H

@class NSString;
@protocol PXSharedLibraryInvitationViewDelegate, PXGadget, PXGadgetDelegate, PXSharedLibrary;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryInvitationView.h"
#import "PXGadgetSpec.h"

@interface PXSharedLibraryInvitationGadget : NSObject <PXSharedLibraryInvitationViewDelegate, PXGadget>

 {
    BOOL _didLoadSharedLibrary;
    PXSharedLibraryInvitationView *_invitationView;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (retain, nonatomic) NSObject<PXSharedLibrary> *sharedLibrary; // ivar: _sharedLibrary
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(BOOL)supportsHighlighting;
-(id)contextMenuActionsForInvitationView:(id)arg0 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)invitationViewSizeThatFitsDidChange:(id)arg0 ;
-(void)prepareCollectionViewItem:(id)arg0 ;
-(void)userDidSelectGadget;


@end


#endif