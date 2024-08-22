// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCAPPPICKERCONTENTPROVIDER_H
#define NCAPPPICKERCONTENTPROVIDER_H

@class NSArray, NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface NCAppPickerContentProvider : NSObject {
    NSArray *_appsSortedByAvgNumberOfNotificationsDescending;
    NSArray *_appsSortedByNameAscending;
    NSMutableSet *_selectedApps;
}


@property (readonly, nonatomic, getter=isAbleToSortByAvgNumberOfNotifications) BOOL ableToSortByAvgNumberOfNotifications; // ivar: _ableToSortByAvgNumberOfNotifications
@property (readonly, copy, nonatomic) NSString *longestAppName; // ivar: _longestAppName
@property (readonly, nonatomic) NSUInteger maxAvgNumberOfNotifications; // ivar: _maxAvgNumberOfNotifications
@property (readonly, copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (readonly, nonatomic) NSUInteger selectedCount;
@property (readonly, nonatomic, getter=isSortedByAvgNumberOfNotifications) BOOL sortedByAvgNumberOfNotifications; // ivar: _sortedByAvgNumberOfNotifications
@property (readonly, nonatomic) NSUInteger totalCount;


+(void)providerWithPreviousBundleIdentifiersSelection:(id)arg0 numDaysForAverageNotificationCount:(id)arg1 onMainQueue:(id)arg2 ;
-(BOOL)isSelectedForIndex:(NSUInteger)arg0 ;
-(NSUInteger)avgNumberOfNotificationsForIndex:(NSUInteger)arg0 ;
-(id)_appForIndex:(NSUInteger)arg0 ;
-(id)_initWithATXDigestSetupEntities:(id)arg0 containsMessageAndTimeSensitiveData:(BOOL)arg1 numberOfDays:(NSUInteger)arg2 previousBundleIdentifiersSelection:(id)arg3 ;
-(id)bundleIdentifierForIndex:(NSUInteger)arg0 ;
-(id)imageForIndex:(NSUInteger)arg0 size:(struct CGSize )arg1 ;
-(id)nameForIndex:(NSUInteger)arg0 ;
-(void)sortByAvgNumberOfNotifications;
-(void)sortByName;
-(void)toggleSelectedForIndex:(NSUInteger)arg0 ;


@end


#endif