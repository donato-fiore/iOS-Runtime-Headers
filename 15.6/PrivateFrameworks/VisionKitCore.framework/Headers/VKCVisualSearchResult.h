// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCVISUALSEARCHRESULT_H
#define VKCVISUALSEARCHRESULT_H

@class MADVIVisualSearchGatingResult, NSData, NSArray, MADVIVisualSearchResult;

#import <Foundation/Foundation.h>


@interface VKCVisualSearchResult : NSObject

@property (retain, nonatomic) MADVIVisualSearchGatingResult *gatingResult; // ivar: _gatingResult
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSArray *resultItems; // ivar: _resultItems
@property (retain, nonatomic) MADVIVisualSearchResult *searchResult; // ivar: _searchResult


-(id)description;
-(id)initWithGatingResult:(id)arg0 ;


@end


#endif