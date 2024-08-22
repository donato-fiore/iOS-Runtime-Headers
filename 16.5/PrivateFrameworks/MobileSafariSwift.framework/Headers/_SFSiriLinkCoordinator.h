// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSIRILINKCOORDINATOR_H
#define _SFSIRILINKCOORDINATOR_H

@protocol _SFSiriLinkActionPerformer;

#import <Foundation/Foundation.h>


@interface _SFSiriLinkCoordinator : NSObject

@property (nonatomic, weak) NSObject<_SFSiriLinkActionPerformer> *actionPerformer; // ivar: actionPerformer


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


@end


#endif