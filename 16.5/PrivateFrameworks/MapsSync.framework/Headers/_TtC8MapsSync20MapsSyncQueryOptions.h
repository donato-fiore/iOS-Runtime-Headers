// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC20MAPSSYNCQUERYOPTIONS_H
#define _TTC8MAPSSYNC20MAPSSYNCQUERYOPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC8MapsSync22MapsSyncQueryPredicate.h"
#import "_TtC8MapsSync13MapsSyncRange.h"

@interface _TtC8MapsSync20MapsSyncQueryOptions : NSObject {
    ? sortDescriptors;
}


@property (nonatomic) BOOL notifyOnLoad; // ivar: notifyOnLoad
@property (nonatomic, retain) _TtC8MapsSync22MapsSyncQueryPredicate *predicate; // ivar: predicate
@property (nonatomic, retain) _TtC8MapsSync13MapsSyncRange *range; // ivar: range
@property (nonatomic, copy) NSArray *sortDescriptors;


+(id)restrictOptionsWithOptions:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 sortDescriptors:(id)arg1 range:(id)arg2 ;


@end


#endif