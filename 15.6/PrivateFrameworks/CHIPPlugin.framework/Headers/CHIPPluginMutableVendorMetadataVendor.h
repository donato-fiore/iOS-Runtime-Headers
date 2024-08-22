// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINMUTABLEVENDORMETADATAVENDOR_H
#define CHIPPLUGINMUTABLEVENDORMETADATAVENDOR_H

@class NSString, NSNumber;


#import "CHIPPluginVendorMetadataVendor.h"

@interface CHIPPluginMutableVendorMetadataVendor : CHIPPluginVendorMetadataVendor

@property (copy) NSString *appBundleID;
@property (copy) NSString *appStoreID;
@property (copy) NSNumber *identifier;
@property (copy) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addProduct:(id)arg0 ;
-(void)removeProductWithID:(id)arg0 ;


@end


#endif