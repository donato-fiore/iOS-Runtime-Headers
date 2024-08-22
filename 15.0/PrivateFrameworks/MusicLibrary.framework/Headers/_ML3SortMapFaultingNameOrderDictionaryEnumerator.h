// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ML3SORTMAPFAULTINGNAMEORDERDICTIONARYENUMERATOR_H
#define _ML3SORTMAPFAULTINGNAMEORDERDICTIONARYENUMERATOR_H

@class NSEnumerator;


#import "ML3DatabaseConnection.h"

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {
    NSEnumerator *_dirtyInsertsEnumerator;
    ML3DatabaseConnection *_connection;
    NSUInteger _offset;
}




-(id)initWithDirtyInsertsEnumerator:(id)arg0 connection:(id)arg1 ;
-(id)nextObject;


@end


#endif