// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNEWSEARCHRESULTSSECTION_H
#define PXNEWSEARCHRESULTSSECTION_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PXNewSearchResultsSection : NSObject

@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *identifierToResultMap; // ivar: _identifierToResultMap
@property (readonly, nonatomic) BOOL isExpandable;
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSArray *visibleResultIdentifiers; // ivar: _visibleResultIdentifiers


-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)_collapsedVisibleResultCount;
-(NSUInteger)_expandedVisibleResultCount;
-(NSUInteger)_sortOrder;
-(id)_identifierToResultMapWithResults:(id)arg0 ;
-(id)_identifiersForResults:(id)arg0 ;
-(id)_stringForType:(NSUInteger)arg0 ;
-(id)_titleForSectionType:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 results:(id)arg1 ;
-(id)searchResultForIdentifier:(id)arg0 ;
-(void)_updateVisibleResultIdentifiers;


@end


#endif