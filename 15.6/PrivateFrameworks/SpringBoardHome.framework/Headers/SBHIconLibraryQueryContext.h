// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONLIBRARYQUERYCONTEXT_H
#define SBHICONLIBRARYQUERYCONTEXT_H

@class NSMutableDictionary, NSUUID;

#import <Foundation/Foundation.h>

#import "SBHIconLibraryQuery.h"

@interface SBHIconLibraryQueryContext : NSObject {
    NSMutableDictionary *_contextStorage;
    NSUInteger _queryContextIdx;
}


@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) SBHIconLibraryQuery *query; // ivar: _query


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryContext:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithQuery:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif