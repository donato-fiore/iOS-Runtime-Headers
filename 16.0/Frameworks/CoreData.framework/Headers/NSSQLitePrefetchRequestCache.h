// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLITEPREFETCHREQUESTCACHE_H
#define NSSQLITEPREFETCHREQUESTCACHE_H


#import <Foundation/Foundation.h>

#import "NSSQLCore.h"

@interface NSSQLitePrefetchRequestCache : NSObject {
    NSSQLCore *_sqlCore;
    NSUInteger _length;
    *id _prefetchRequestsByEntity;
}




-(id)initWithSQLCore:(id)arg0 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(void)dealloc;


@end


#endif