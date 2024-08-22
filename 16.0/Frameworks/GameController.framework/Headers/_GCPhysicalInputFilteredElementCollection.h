// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCPHYSICALINPUTFILTEREDELEMENTCOLLECTION_H
#define _GCPHYSICALINPUTFILTEREDELEMENTCOLLECTION_H

@class Protocol, NSArray;


#import "GCPhysicalInputElementCollection.h"

@interface _GCPhysicalInputFilteredElementCollection : GCPhysicalInputElementCollection {
    GCPhysicalInputElementCollection *_backingCollection;
    Protocol *_filter;
    NSArray *_cached_filteredElements;
}




-(NSUInteger)count;
-(id)elementAtIndex:(NSUInteger)arg0 ;
-(id)elementEnumerator;
-(id)elementForAlias:(id)arg0 ;


@end


#endif