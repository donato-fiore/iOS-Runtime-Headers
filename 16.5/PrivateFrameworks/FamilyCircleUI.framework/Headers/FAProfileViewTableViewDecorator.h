// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAPROFILEVIEWTABLEVIEWDECORATOR_H
#define FAPROFILEVIEWTABLEVIEWDECORATOR_H

@class RUITableView, FAFamilyMember, NSMutableDictionary;


#import "FATableViewDecorator.h"
#import "FAProfilePictureStore.h"

@interface FAProfileViewTableViewDecorator : FATableViewDecorator {
    RUITableView *_remoteTableViewController;
    FAFamilyMember *_familyMember;
    FAProfilePictureStore *_pictureStore;
    NSMutableDictionary *_profileViewForCells;
}




+(BOOL)_shouldShowInSection:(id)arg0 ;
+(BOOL)shouldShowInPage:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)_getOrCreateProfileViewForCell:(id)arg0 ;
-(id)_keyForCell:(id)arg0 ;
-(id)_profileViewForCell:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ruiTableView:(id)arg1 forPerson:(id)arg2 pictureStore:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addProfileViewToCell:(id)arg0 ;
-(void)_removeProfileViewFromCell:(id)arg0 ;


@end


#endif