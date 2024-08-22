// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDVENDORMODELCOLLECTION_H
#define HMDVENDORMODELCOLLECTION_H

@class HMFObject, NSMutableSet;


#import "HMDVendorModelEntry.h"

@interface HMDVendorModelCollection : HMFObject

@property (retain, nonatomic) HMDVendorModelEntry *defaultEntry; // ivar: _defaultEntry
@property (readonly, nonatomic) NSMutableSet *entries; // ivar: _entries


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)init;
-(id)lookupModel:(id)arg0 ;
-(id)lookupProductData:(id)arg0 ;
-(void)addEntry:(id)arg0 ;


@end


#endif