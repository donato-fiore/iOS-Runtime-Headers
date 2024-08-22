// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSEARCHRESULTSECTION_H
#define PLSEARCHRESULTSECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLSearchResultSection : NSObject

@property (readonly, nonatomic) NSUInteger categoryMask; // ivar: _categoryMask
@property (readonly, nonatomic) NSUInteger resultTypes; // ivar: _resultTypes
@property (readonly, nonatomic) NSArray *searchResults; // ivar: _searchResults


-(id)initWithResultTypes:(NSUInteger)arg0 categoryMask:(NSUInteger)arg1 searchResults:(id)arg2 ;


@end


#endif