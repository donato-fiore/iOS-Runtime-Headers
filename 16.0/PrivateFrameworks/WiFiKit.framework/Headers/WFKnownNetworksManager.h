// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFKNOWNNETWORKSMANAGER_H
#define WFKNOWNNETWORKSMANAGER_H

@class NSArray, NSString, CWFInterface;
@protocol WFKnownNetworksProvider;

#import <Foundation/Foundation.h>

#import "WFPrivateAddressConfigManager.h"

@interface WFKnownNetworksManager : NSObject <WFKnownNetworksProvider>



@property (retain, nonatomic) NSArray *allKnownProfiles; // ivar: _allKnownProfiles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CWFInterface *interface; // ivar: _interface
@property (retain, nonatomic) WFPrivateAddressConfigManager *privateAddressConfigManager; // ivar: _privateAddressConfigManager
@property (readonly) Class superclass;


-(BOOL)removeNetworks:(id)arg0 ;
-(id)_getAllKnownProfiles;
-(id)allEditableNetworkProfiles;
-(id)allNonEditableNetworkProfiles;
-(id)initWithInterface:(id)arg0 ;
-(id)passwordForNetworksWithSSID:(id)arg0 ;
-(id)privateAddressConfigForNetworkName:(id)arg0 ;


@end


#endif