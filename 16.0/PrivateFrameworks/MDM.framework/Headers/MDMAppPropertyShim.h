// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMAPPPROPERTYSHIM_H
#define MDMAPPPROPERTYSHIM_H

@class NSDictionary, NSSet, NSString, DMFConnection, NSArray, DMFFetchAppsRequest, DMFFetchAppsResultObject;
@protocol MDMAppItemsDataSource;

#import <Foundation/Foundation.h>


@interface MDMAppPropertyShim : NSObject <MDMAppItemsDataSource>



@property (copy, nonatomic) NSDictionary *appItems; // ivar: _appItems
@property (copy, nonatomic) NSSet *appsRequested; // ivar: _appsRequested
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DMFConnection *deviceManagementUserConnection; // ivar: _deviceManagementUserConnection
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *itemsRequested; // ivar: _itemsRequested
@property (copy, nonatomic) NSArray *keysForRequest; // ivar: _keysForRequest
@property (retain, nonatomic) DMFFetchAppsRequest *request; // ivar: _request
@property (retain, nonatomic) DMFFetchAppsResultObject *response; // ivar: _response
@property (nonatomic) BOOL shouldReturnManagedAppsOnly; // ivar: _shouldReturnManagedAppsOnly
@property (readonly) Class superclass;


+(id)_dmdKeysToRequestToGetItems:(id)arg0 ;
+(id)_itemKeyToDMDKeyMappingTable;
-(id)_appDictionaryFromApp:(id)arg0 ;
-(void)_createAppItems;
-(void)_createKeysForRequest;
-(void)_createRequest;
-(void)_executeRequest;
-(void)fetchAppItems;


@end


#endif