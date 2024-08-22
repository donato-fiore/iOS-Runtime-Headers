// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFHOMEKITSETTINGSADAPTERMANAGER_H
#define HFHOMEKITSETTINGSADAPTERMANAGER_H

@class NSMutableDictionary;
@protocol HFHomeKitSettingsVendor;

#import <Foundation/Foundation.h>


@interface HFHomeKitSettingsAdapterManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *adaptersByID; // ivar: _adaptersByID
@property (readonly, weak, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor


-(id)_createAdapterForIdentifier:(id)arg0 ;
-(id)adapterForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithHomeKitSettingsVendor:(id)arg0 ;


@end


#endif