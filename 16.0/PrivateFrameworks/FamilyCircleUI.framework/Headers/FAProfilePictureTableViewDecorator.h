// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAPROFILEPICTURETABLEVIEWDECORATOR_H
#define FAPROFILEPICTURETABLEVIEWDECORATOR_H

@class RUITableView;


#import "FATableViewDecorator.h"
#import "FAProfilePictureStore.h"

@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {
    RUITableView *_remoteTableViewController;
    FAProfilePictureStore *_pictureStore;
}




+(BOOL)_shouldShowPictureInSection:(id)arg0 ;
+(BOOL)shouldShowPicturesInPage:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ruiTableView:(id)arg1 pictureStore:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_profilePictureStoreDidReload;
-(void)dealloc;


@end


#endif