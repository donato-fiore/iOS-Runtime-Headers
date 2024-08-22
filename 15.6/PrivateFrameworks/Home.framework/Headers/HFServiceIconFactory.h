// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSERVICEICONFACTORY_H
#define HFSERVICEICONFACTORY_H


#import <Foundation/Foundation.h>


@interface HFServiceIconFactory : NSObject



+(id)_defaultIconDescriptorForServiceType:(id)arg0 serviceSubtype:(id)arg1 fallbackToPlaceholderIcon:(BOOL)arg2 ;
+(id)_iconSetForServiceType:(id)arg0 serviceSubtype:(id)arg1 fallbackToPlaceholderIcon:(BOOL)arg2 ;
+(id)_multiSubtypeIconSetForServiceType:(id)arg0 serviceSubtype:(id)arg1 ;
+(id)_replacementIdentifierForIconIdentifier:(id)arg0 ;
+(id)allIconDescriptorsForService:(id)arg0 ;
+(id)allIconDescriptorsForServiceType:(id)arg0 serviceSubtype:(id)arg1 ;
+(id)defaultIconDescriptorForService:(id)arg0 ;
+(id)defaultIconDescriptorForServiceType:(id)arg0 serviceSubtype:(id)arg1 ;
+(id)displayIconDescriptorFromIconDescriptor:(id)arg0 symbolName:(id)arg1 ;
+(id)iconDescriptorForAccessory:(id)arg0 ;
+(id)iconDescriptorForAccessoryCategory:(id)arg0 ;
+(id)iconDescriptorForAccessoryCategoryOrServiceType:(id)arg0 ;
+(id)iconDescriptorForSensorAccessoryWithNumberOfServices:(NSUInteger)arg0 ;
+(id)iconDescriptorWithIdentifier:(id)arg0 forService:(id)arg1 ;
+(id)iconDescriptorWithIdentifier:(id)arg0 forServiceType:(id)arg1 serviceSubtype:(id)arg2 ;
+(id)iconModifiersForService:(id)arg0 ;
+(id)overrideIconDescriptorForMultiServiceAccessory:(id)arg0 iconDescriptor:(id)arg1 ;


@end


#endif