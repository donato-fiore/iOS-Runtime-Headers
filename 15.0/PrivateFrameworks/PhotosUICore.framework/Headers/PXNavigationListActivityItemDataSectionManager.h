// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXNAVIGATIONLISTACTIVITYITEMDATASECTIONMANAGER_H
#define PXNAVIGATIONLISTACTIVITYITEMDATASECTIONMANAGER_H

@class NSString;
@protocol PXChangeObserver;


#import "PXNavigationListItemDataSectionManager.h"
#import "PXForYouBadgeManager.h"

@interface PXNavigationListActivityItemDataSectionManager : PXNavigationListItemDataSectionManager <PXChangeObserver>



@property (readonly, nonatomic) PXForYouBadgeManager *badgeManager; // ivar: _badgeManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithItem:(id)arg0 ;
-(void)_updateSharedAlbumBadges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif