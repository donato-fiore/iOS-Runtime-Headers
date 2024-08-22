// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREITEMLIBRARYIMPORTELEMENT_H
#define MPSTOREITEMLIBRARYIMPORTELEMENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MPStoreItemLibraryImportElement : NSObject

@property (readonly, nonatomic) NSDictionary *additionalTrackMetadata; // ivar: _additionalTrackMetadata
@property (readonly, nonatomic) NSInteger storeItemID; // ivar: _storeItemID


-(id)initWithStoreItemID:(NSInteger)arg0 additionalTrackMetadata:(id)arg1 ;
-(id)storeItem;


@end


#endif