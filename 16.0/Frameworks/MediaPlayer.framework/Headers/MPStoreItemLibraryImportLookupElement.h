// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTOREITEMLIBRARYIMPORTLOOKUPELEMENT_H
#define MPSTOREITEMLIBRARYIMPORTLOOKUPELEMENT_H

@class ICStorePlatformMetadata, NSDictionary;


#import "MPStoreItemLibraryImportElement.h"

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {
    ICStorePlatformMetadata *_storeItem;
}


@property (readonly, nonatomic) NSDictionary *lookupDictionary; // ivar: _lookupDictionary


-(id)initWithLookupDictionary:(id)arg0 additionalTrackMetadata:(id)arg1 ;
-(id)storeItem;


@end


#endif