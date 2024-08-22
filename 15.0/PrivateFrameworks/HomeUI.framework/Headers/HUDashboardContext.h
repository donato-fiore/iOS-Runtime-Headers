// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDCONTEXT_H
#define HUDASHBOARDCONTEXT_H

@class HMHome, NSString, HMRoom;

#import <Foundation/Foundation.h>


@interface HUDashboardContext : NSObject

@property (nonatomic) BOOL allowsAdding; // ivar: _allowsAdding
@property (nonatomic) BOOL allowsAnnounce; // ivar: _allowsAnnounce
@property (nonatomic) BOOL allowsBanners; // ivar: _allowsBanners
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (readonly, nonatomic) NSUInteger dashboardType; // ivar: _dashboardType
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL onlyShowsFavorites; // ivar: _onlyShowsFavorites
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (nonatomic) BOOL shouldHideCameras; // ivar: _shouldHideCameras
@property (nonatomic) BOOL shouldHideHeadline; // ivar: _shouldHideHeadline
@property (nonatomic) BOOL shouldHidePlaceholderButtons; // ivar: _shouldHidePlaceholderButtons
@property (nonatomic) BOOL shouldHideStatus; // ivar: _shouldHideStatus
@property (nonatomic) BOOL shouldIncludeRoomInAccessoryNames; // ivar: _shouldIncludeRoomInAccessoryNames


+(id)favoritesDashboardForHome:(id)arg0 ;
+(id)na_identity;
+(id)roomDashboardForRoom:(id)arg0 ;
-(BOOL)_hasOnlySensorServices:(id)arg0 ;
-(BOOL)_shouldHideAccessory:(id)arg0 limitedByServiceTypes:(id)arg1 ;
-(BOOL)_shouldHideMediaProfileContainer:(id)arg0 ;
-(BOOL)_shouldHideService:(id)arg0 limitedByServiceTypes:(id)arg1 ;
-(BOOL)_shouldHideServiceGroup:(id)arg0 limitedByServiceTypes:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHideHomeKitObject:(id)arg0 ;
-(BOOL)shouldHideHomeKitObject:(id)arg0 limitedByServiceTypes:(id)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 home:(id)arg1 room:(id)arg2 ;


@end


#endif