// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPOBJECTCONTEXTDETERMINISTICUUIDSET_H
#define TSPOBJECTCONTEXTDETERMINISTICUUIDSET_H

@class NSMutableIndexSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSPObjectContextDeterministicUUIDSet : NSObject {
    NSMutableIndexSet *_identifiers;
    NSMutableDictionary *_offsetsPerIdentifier;
}




-(BOOL)addEntryForIdentifier:(NSInteger)arg0 offset:(NSUInteger)arg1 ;


@end


#endif