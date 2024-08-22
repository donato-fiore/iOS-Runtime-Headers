// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEEXTERNALACTIONLINKEXTENSIONPARAMS_H
#define GEOPLACEEXTERNALACTIONLINKEXTENSIONPARAMS_H

@class NSMapTable, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDExtensionParams.h"
#import "GEOAttributionApp.h"

@interface GEOPlaceExternalActionLinkExtensionParams : NSObject {
    GEOPDExtensionParams *_extensionParams;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) GEOAttributionApp *attributionApp;
@property (readonly, nonatomic) NSString *externalItemId;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly, nonatomic) NSString *vendorId;


-(id)initWithExtensionParams:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif