// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSEARCHFOUNDATIONRESULT_H
#define MKSEARCHFOUNDATIONRESULT_H

@class SFSearchResult, NSArray, SFText, SFImage, SFActionItem, NSBundle, NSString, NSData, NSMutableArray;
@protocol MKLocationManagerObserver;


#import "MKSearchFoundationRichText.h"
#import "MKLocationManager.h"
#import "MKMapItem.h"
#import "MKSearchFoundationBusinessHoursAndDistanceRichText.h"

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver>

 {
    NSArray *_descriptions;
    SFText *_title;
    SFImage *_thumbnail;
    SFActionItem *_action;
}


@property (retain, nonatomic) id *attributionObserver; // ivar: _attributionObserver
@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MKSearchFoundationRichText *fourthLineDisplayedText; // ivar: _fourthLineDisplayedText
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iconSize; // ivar: _iconSize
@property (retain, nonatomic) MKLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (nonatomic) NSUInteger mksfResultType; // ivar: _mksfResultType
@property (nonatomic) BOOL optionSmallerScreen; // ivar: _optionSmallerScreen
@property (retain, nonatomic) MKSearchFoundationRichText *secondLineDisplayedText; // ivar: _secondLineDisplayedText
@property (readonly) Class superclass;
@property (retain, nonatomic) MKSearchFoundationBusinessHoursAndDistanceRichText *thirdLineDisplayedText; // ivar: _thirdLineDisplayedText
@property (retain, nonatomic) NSMutableArray *thirdLineText; // ivar: _thirdLineText


+(id)styledStringFromStringArray:(id)arg0 ;
-(BOOL)_isSmallerScreen;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(id)_appleRatingsDescription;
-(id)_brandURL;
-(id)_businessAddress;
-(id)_businessCategory;
-(id)_businessHoursAndDistance;
-(id)_businessReviewText;
-(id)_defaultRichTextItems;
-(id)_populateAppClipData:(id)arg0 ;
-(id)_populateButtonItem:(id)arg0 imageName:(id)arg1 command:(id)arg2 ;
-(id)_populateButtonItemsAndCommands;
-(id)action;
-(id)initWithMapsData:(id)arg0 iconSize:(NSUInteger)arg1 bundleID:(id)arg2 ;
-(id)thumbnail;
-(id)title;
-(void)_commonInit;
-(void)_locationApprovalDidChange;
-(void)dealloc;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)setAction:(id)arg0 ;
-(void)setThumbnail:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif