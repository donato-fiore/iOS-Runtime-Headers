// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEVENUEINFOCONTENTSVIEWCONTROLLER_H
#define MKPLACEVENUEINFOCONTENTSVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol MKModuleViewControllerProtocol, GEOMapItemVenueContents;


#import "MKPlaceSectionViewController.h"

@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *labels; // ivar: _labels
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<GEOMapItemVenueContents> *venueContents; // ivar: _venueContents


+(BOOL)isVisibleWithMapItem:(id)arg0 ;
+(id)venueInfoContentsViewControllerWithMapItem:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)_labelFont;
-(id)initWithVenueContents:(id)arg0 ;
-(id)labelWithTitle:(id)arg0 ;
-(id)rowWithLeftLabel:(id)arg0 rightLabel:(id)arg1 ;
-(void)_addPaddingRowToRows:(id)arg0 ;
-(void)_contentSizeDidChange;
-(void)_updateRows;
-(void)infoCardThemeChanged;
-(void)updateLabelsProperties;
-(void)viewDidLoad;


@end


#endif