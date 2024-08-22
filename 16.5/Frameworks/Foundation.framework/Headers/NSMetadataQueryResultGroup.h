// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMETADATAQUERYRESULTGROUP_H
#define NSMETADATAQUERYRESULTGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSMetadataQueryResultGroup : NSObject {
    id _private;
    NSUInteger _private2;
    *void _reserved;
}


@property (readonly, copy) NSString *attribute;
@property (readonly) NSUInteger resultCount;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) NSArray *subgroups;
@property (readonly, retain) id *value;


-(id)_init:(id)arg0 attributes:(id)arg1 index:(NSUInteger)arg2 value:(id)arg3 ;
-(id)resultAtIndex:(NSUInteger)arg0 ;
-(void)_addResult:(NSUInteger)arg0 ;
-(void)_zapResultArray;
-(void)dealloc;


@end


#endif