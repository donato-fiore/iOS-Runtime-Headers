// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNASEARCHRESULTEXPOSUREITEM_H
#define ICNASEARCHRESULTEXPOSUREITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICNASearchResultExposureItem : NSObject

@property (nonatomic) NSUInteger nonTopHitResultCount; // ivar: _nonTopHitResultCount
@property (nonatomic) BOOL searchResultWasSelected; // ivar: _searchResultWasSelected
@property (readonly, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) NSUInteger topHitResultCount; // ivar: _topHitResultCount


-(id)initWithSearchString:(id)arg0 ;
-(void)updateWithTopHitResultCount:(NSUInteger)arg0 nonTopHitResultCount:(NSUInteger)arg1 ;


@end


#endif