// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKOBJECTMOCONVERTER_H
#define _DKOBJECTMOCONVERTER_H

@class NSCache, NSArray;

#import <Foundation/Foundation.h>


@interface _DKObjectMOConverter : NSObject {
    NSCache *_cache;
}


@property BOOL deduplicateValues; // ivar: _deduplicateValues
@property (retain) NSArray *excludedMetadataKeys; // ivar: _excludedMetadataKeys
@property BOOL readMetadata; // ivar: _readMetadata


-(id)dataIntervalsFromManagedObjects:(id)arg0 ;
-(id)init;
-(id)insertObject:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)objectsFromManagedObjects:(id)arg0 ;


@end


#endif