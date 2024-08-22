// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STDRILLINITEMINFOGROUPSPECIFIERPROVIDER_H
#define STDRILLINITEMINFOGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STGroupSpecifierProvider.h"
#import "STUsageItem.h"

@interface STDrillInItemInfoGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) PSSpecifier *ageRatingSpecifier; // ivar: _ageRatingSpecifier
@property (readonly, nonatomic) PSSpecifier *appIconSpecifier; // ivar: _appIconSpecifier
@property (readonly, nonatomic) PSSpecifier *developerSpecifier; // ivar: _developerSpecifier
@property (readonly, nonatomic) STUsageItem *usageItem; // ivar: _usageItem


-(id)ageRating:(id)arg0 ;
-(id)category:(id)arg0 ;
-(id)developer:(id)arg0 ;
-(id)initWithUsageItem:(id)arg0 ;
-(id)usageItem:(id)arg0 ;
-(void)_didFetchAppInfo:(id)arg0 ;


@end


#endif