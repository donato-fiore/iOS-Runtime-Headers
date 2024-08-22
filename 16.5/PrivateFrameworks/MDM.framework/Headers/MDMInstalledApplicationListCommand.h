// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMINSTALLEDAPPLICATIONLISTCOMMAND_H
#define MDMINSTALLEDAPPLICATIONLISTCOMMAND_H

@class NSDictionary, NSSet;
@protocol MDMAppItemsDataSource;

#import <Foundation/Foundation.h>


@interface MDMInstalledApplicationListCommand : NSObject

@property (copy, nonatomic) NSDictionary *appItems; // ivar: _appItems
@property (copy, nonatomic) NSSet *appsRequested; // ivar: _appsRequested
@property (retain, nonatomic) NSObject<MDMAppItemsDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL isUserEnrollment; // ivar: _isUserEnrollment
@property (copy, nonatomic) NSSet *itemsRequested; // ivar: _itemsRequested
@property (copy, nonatomic) NSDictionary *request; // ivar: _request
@property (copy, nonatomic) NSDictionary *response; // ivar: _response
@property (nonatomic) BOOL shouldReturnManagedAppsOnly; // ivar: _shouldReturnManagedAppsOnly


+(id)allItems;
+(id)itemsThatMustAlwaysBeReturned;
-(id)responseForRequest:(id)arg0 ;
-(void)_processArguments;
-(void)_processIdentifiersArgument;
-(void)_processItemsArgument;
-(void)_processManagedAppsOnlyArgument;
-(void)_reset;
-(void)_validateRequestDictionaryIsPresentAndADictionary;
-(void)fetchAppProperties;


@end


#endif