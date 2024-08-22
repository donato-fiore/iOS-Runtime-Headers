// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKSTYLESGROUP_H
#define IKSTYLESGROUP_H

@class NSIndexSet, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface IKStylesGroup : NSObject

@property (readonly, retain, nonatomic) NSIndexSet *groupIndexes; // ivar: _groupIndexes
@property (readonly, retain, nonatomic) NSDictionary *indexedSelectors; // ivar: _indexedSelectors
@property (readonly, retain, nonatomic) NSArray *mediaQueryList; // ivar: _mediaQueryList
@property (readonly, retain, nonatomic) NSArray *orderedStylesOrGroups; // ivar: _orderedStylesOrGroups


+(id)stylesGroupWithMarkup:(id)arg0 filterBlockedStyles:(BOOL)arg1 ;
-(id)initWithCSSRule:(id)arg0 mediaQueryList:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
-(id)initWithMarkup:(id)arg0 parseSubGroups:(BOOL)arg1 mediaQueryList:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
-(void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg0 ;


@end


#endif