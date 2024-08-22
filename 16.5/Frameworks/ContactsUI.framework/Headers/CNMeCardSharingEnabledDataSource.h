// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMECARDSHARINGENABLEDDATASOURCE_H
#define CNMECARDSHARINGENABLEDDATASOURCE_H

@class NSString, UISwitch, NSArray;
@protocol CNMeCardSharingSectionDataSource, CNMeCardSharingEnabledDelegate;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingEnabledDataSource : NSObject <CNMeCardSharingSectionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingEnabledDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISwitch *enabledSwitch; // ivar: _enabledSwitch
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSUInteger selectedIndex;
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (readonly) Class superclass;


-(BOOL)supportsSelection;
-(NSUInteger)numberOfItems;
-(id)initWithSharingEnabled:(BOOL)arg0 ;
-(id)itemForIndex:(NSUInteger)arg0 ;
-(id)sectionFooterLabel;
-(id)sectionHeaderLabel;
-(void)buildItems;
-(void)didSelectItemAtIndex:(NSUInteger)arg0 ;
-(void)didToggleEnabledSwitch:(id)arg0 ;


@end


#endif