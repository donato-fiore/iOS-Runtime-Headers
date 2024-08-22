// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOPLACESEARCHCOMPLETIONGROUP_H
#define _GEOPLACESEARCHCOMPLETIONGROUP_H

@class NSString, NSArray;
@protocol GEOCompletionGroup;

#import <Foundation/Foundation.h>


@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enableMapsSuggestServerReranking; // ivar: _enableMapsSuggestServerReranking
@property (readonly, nonatomic) BOOL enforceServerResultsOrder; // ivar: _enforceServerResultsOrder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSString *localizedSectionHeader; // ivar: _localizedSectionHeader
@property (readonly, nonatomic) BOOL shouldInterleaveClientResults; // ivar: _shouldInterleaveClientResults
@property (readonly) Class superclass;


-(id)initWithSection:(id)arg0 traits:(id)arg1 entryListIndex:(int)arg2 mapItems:(id)arg3 collections:(id)arg4 publishers:(id)arg5 ;


@end


#endif