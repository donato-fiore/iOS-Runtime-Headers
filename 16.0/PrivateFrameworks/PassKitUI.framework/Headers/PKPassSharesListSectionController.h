// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHARESLISTSECTIONCONTROLLER_H
#define PKPASSSHARESLISTSECTIONCONTROLLER_H

@class PKSharedPassSharesController, PKPassShare, NSArray, NSString;
@protocol PKSharedPassSharesControllerDelegate, PKPassSharesListSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassSharesListSectionController : PKPassShareSectionController <PKSharedPassSharesControllerDelegate>

 {
    NSUInteger _mode;
    PKSharedPassSharesController *_sharesController;
    PKPassShare *_rootShare;
    NSArray *_shareItems;
    NSArray *_actionItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassSharesListSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_alertForDisplayableError:(id)arg0 ;
-(id)_alertForRevokeOptionsForShare:(id)arg0 ;
-(id)_contactForShareRowItem:(id)arg0 ;
-(id)_displayableShares;
-(id)_subtitleForShare:(id)arg0 ;
-(id)_titleForShareRowItem:(id)arg0 ;
-(id)decorateListCell:(id)arg0 forShareRowItem:(id)arg1 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 sharesController:(id)arg1 rootShare:(id)arg2 delegate:(id)arg3 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_confirmRevokeShare:(id)arg0 ;
-(void)_revokeAllShares;
-(void)_revokeShare:(id)arg0 cascade:(BOOL)arg1 ;
-(void)_updateShareRowItems;
-(void)_updateStopSharingItemToDisabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)didSelectItem:(id)arg0 ;
-(void)sharedPassSharesControllerDidUpdateShares:(id)arg0 ;


@end


#endif