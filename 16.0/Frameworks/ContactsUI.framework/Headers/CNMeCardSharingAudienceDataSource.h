// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMECARDSHARINGAUDIENCEDATASOURCE_H
#define CNMECARDSHARINGAUDIENCEDATASOURCE_H

@class NSString, NSArray;
@protocol CNMeCardSharingSectionDataSource;

#import <Foundation/Foundation.h>

#import "CNMeCardSharingRowItem.h"

@interface CNMeCardSharingAudienceDataSource : NSObject <CNMeCardSharingSectionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSUInteger selectedIndex;
@property (retain, nonatomic) CNMeCardSharingRowItem *selectedItem; // ivar: _selectedItem
@property (nonatomic) NSUInteger selectedSharingAudience; // ivar: _selectedSharingAudience
@property (nonatomic) BOOL shouldShowEveryone; // ivar: _shouldShowEveryone
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *valuesArray; // ivar: _valuesArray


-(BOOL)supportsSelection;
-(NSUInteger)indexForSharingAudience:(NSUInteger)arg0 ;
-(NSUInteger)numberOfItems;
-(NSUInteger)sharingAudienceForIndex:(NSUInteger)arg0 ;
-(id)initWithSelectedSharingAudience:(NSUInteger)arg0 ;
-(id)itemForIndex:(NSUInteger)arg0 ;
-(id)sectionFooterLabel;
-(id)sectionHeaderLabel;
-(void)didSelectItemAtIndex:(NSUInteger)arg0 ;
-(void)reloadItems;


@end


#endif