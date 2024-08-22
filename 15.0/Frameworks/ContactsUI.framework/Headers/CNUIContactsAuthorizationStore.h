// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICONTACTSAUTHORIZATIONSTORE_H
#define CNUICONTACTSAUTHORIZATIONSTORE_H

@class NSString;
@protocol CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving, CNUICoreRemoteApplicationIconFetching, CNTCCSettings;

#import <Foundation/Foundation.h>


@interface CNUIContactsAuthorizationStore : NSObject <CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreRemoteApplicationIconFetching> *iconFetcher; // ivar: _iconFetcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNTCCSettings> *tccSettings; // ivar: _tccSettings


-(id)contactsAuthorizationModel;
-(id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)recordForBundleIdentifier:(id)arg0 ;
-(id)records;
-(id)saveContactsAuthorizationModel:(id)arg0 ;


@end


#endif