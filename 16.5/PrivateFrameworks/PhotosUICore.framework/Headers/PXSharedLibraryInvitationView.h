// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYINVITATIONVIEW_H
#define PXSHAREDLIBRARYINVITATIONVIEW_H

@class UICollectionViewCell, NSString, UITraitCollection;
@protocol UIContextMenuInteractionDelegate, PXSharedLibraryInvitationViewDelegate, PXSharedLibraryParticipant;


#import "PXSharedLibraryInvitationContentView.h"

@interface PXSharedLibraryInvitationView : UICollectionViewCell <UIContextMenuInteractionDelegate>

 {
    PXSharedLibraryInvitationContentView *_invitationContentView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSharedLibraryInvitationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITraitCollection *overrideTraitCollection; // ivar: _overrideTraitCollection
@property (retain, nonatomic) NSObject<PXSharedLibraryParticipant> *owner;
@property (readonly) Class superclass;


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif