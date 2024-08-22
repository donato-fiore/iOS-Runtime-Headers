// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSIRILINKCOORDINATOR_H
#define SFSIRILINKCOORDINATOR_H

@class NSString;
@protocol _SFSiriLinkActionPerformer, SFSiriLinkActionPerformer;

#import <Foundation/Foundation.h>

#import "_SFSiriLinkCoordinator.h"

@interface SFSiriLinkCoordinator : NSObject <_SFSiriLinkActionPerformer>

 {
    _SFSiriLinkCoordinator *_internal;
}


@property (weak, nonatomic) NSObject<SFSiriLinkActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)setApplicationProxy:(id)arg0 ;
-(id)changeReaderModeInteraction;
-(id)closeTabInteraction;
-(id)closeViewInteraction;
-(id)createNewBookmarkInteraction;
-(id)createNewPrivateTabInteraction;
-(id)createNewTabGroupInteraction;
-(id)createNewTabInteraction;
-(id)createReadingListItemInteraction;
-(id)init;
-(id)navigateContinuousReadingListInteraction;
-(id)openBookmarkInteraction;
-(id)openReadingListItemInteraction;
-(id)openTabGroupInteraction;
-(id)openTabInteraction;
-(id)openViewInteraction;
-(id)tabEntityInteractionWithUUID:(id)arg0 ;
-(id)webSearchInteraction;
-(void)closeStartPage;
-(void)closeTabWithUUID:(id)arg0 ;
-(void)createNewBookmarkWithTitle:(id)arg0 ;
-(void)createNewPrivateTab;
-(void)createNewTab;
-(void)createNewTabGroupWithTitle:(id)arg0 ;
-(void)createReadingListItem;
-(void)navigateContinuousReadingListToDirection:(NSUInteger)arg0 ;
-(void)openBookmarkWithUUIDString:(id)arg0 ;
-(void)openStartPage;
-(void)openTabGroupOfKind:(NSInteger)arg0 uuidString:(id)arg1 ;
-(void)openTabWithUUID:(id)arg0 ;
-(void)performSearchUsingQuery:(id)arg0 ;
-(void)setReaderModeEnabled:(BOOL)arg0 ;
-(void)setView:(NSUInteger)arg0 visible:(BOOL)arg1 ;
-(void)toggleReaderMode;


@end


#endif