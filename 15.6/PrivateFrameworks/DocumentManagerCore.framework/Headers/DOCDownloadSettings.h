// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCDOWNLOADSETTINGS_H
#define DOCDOWNLOADSETTINGS_H

@class FPItem, NSArray, NSError;

#import <Foundation/Foundation.h>


@interface DOCDownloadSettings : NSObject

@property (retain) FPItem *currentDefaultDownloadsLocationItem; // ivar: _currentDefaultDownloadsLocationItem
@property (retain) NSArray *providers; // ivar: _providers
@property (retain) id *providersObserverContext; // ivar: _providersObserverContext
@property (retain) NSError *providersObserverError; // ivar: _providersObserverError


-(BOOL)_saveDownloadFolderItem:(id)arg0 error:(*id)arg1 ;
-(id)_createErrorForCode:(NSInteger)arg0 localizedDescription:(id)arg1 underlyingError:(id)arg2 ;
-(id)init;
-(void)_createDefaultDownloadsFolderInParent:(id)arg0 completion:(id)arg1 ;
-(void)_fetchAvailableProviders:(id)arg0 ;
-(void)_fetchDefaultFallbackDownloadLocationWithPreferredDomain:(id)arg0 completion:(id)arg1 ;
-(void)_fetchProviders:(id)arg0 ;
-(void)_preferredProvidersIn:(id)arg0 completion:(id)arg1 ;
-(void)_removeCurrentDownloadsLocationFromFavorites;
-(void)_rootItemOfPreferredProviderInDomains:(id)arg0 completion:(id)arg1 ;
-(void)_validatePreferredProvider:(id)arg0 completion:(id)arg1 ;
-(void)fetchDefaultDownloadsLocationItem:(id)arg0 ;
-(void)fetchProvidersSuitableForDownloads:(id)arg0 ;
-(void)resetDefaultDownloadsLocationItem;
-(void)setDefaultDownloadsItemForProviderDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDefaultDownloadsLocationItem:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif