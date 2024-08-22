// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGSETTINGSNAMEDATASOURCE_H
#define CNMECARDSHARINGSETTINGSNAMEDATASOURCE_H

@class CNContact, NSString, NSArray;
@protocol CNMeCardSharingSectionDataSource;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingSettingsNameDataSource : NSObject <CNMeCardSharingSectionDataSource>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *formattedName; // ivar: _formattedName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSUInteger selectedIndex;
@property (readonly) Class superclass;


-(BOOL)supportsSelection;
-(NSUInteger)numberOfItems;
-(id)itemForIndex:(NSUInteger)arg0 ;
-(id)sectionFooterLabel;
-(id)sectionHeaderLabel;
-(void)didSelectItemAtIndex:(NSUInteger)arg0 ;


@end


#endif