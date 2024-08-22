// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIUSERACTIVITYRESTORER_H
#define CNUIUSERACTIVITYRESTORER_H

@class NSString, CNContactStore, NSSet;
@protocol CNUIUserActivityRestorerDelegate;

#import <Foundation/Foundation.h>


@interface CNUIUserActivityRestorer : NSObject

@property (readonly, nonatomic) NSString *activityTypeCreateContactIntent; // ivar: _activityTypeCreateContactIntent
@property (readonly, nonatomic) NSString *activityTypeSpotlightQueryContinuation; // ivar: _activityTypeSpotlightQueryContinuation
@property (readonly, nonatomic) NSString *activityTypeSpotlightSearchableItem; // ivar: _activityTypeSpotlightSearchableItem
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (weak, nonatomic) NSObject<CNUIUserActivityRestorerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSSet *restorableActivityTypes; // ivar: _restorableActivityTypes


+(id)log;
-(BOOL)restoreCreateContactIntent:(id)arg0 ;
-(BOOL)restoreEditingContact:(id)arg0 ;
-(BOOL)restoreSpotlightQueryContinuation:(id)arg0 ;
-(BOOL)restoreSpotlightSearchableItem:(id)arg0 ;
-(BOOL)restoreUserActivity:(id)arg0 ;
-(BOOL)restoreViewingContact:(id)arg0 ;
-(BOOL)restoreViewingGroups:(id)arg0 ;
-(BOOL)restoreViewingList:(id)arg0 ;
-(BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif