// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCVISUALSEARCHRESULTITEM_H
#define VKCVISUALSEARCHRESULTITEM_H

@class UIMenu, MADVIVisualSearchGatingDomainInfo, NSString, MADVIVisualSearchGatingResultItem, MADVIVisualSearchResultItem;
@protocol VKAnalysisElementDebugMenuProvider;

#import <Foundation/Foundation.h>


@interface VKCVisualSearchResultItem : NSObject <VKAnalysisElementDebugMenuProvider>



@property (readonly, nonatomic) UIMenu *debugMenu;
@property (retain, nonatomic) MADVIVisualSearchGatingDomainInfo *domainInfo; // ivar: _domainInfo
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) CGRect normalizedBoundingBox;
@property (readonly, nonatomic) CGPoint normalizedIconLocation;
@property (nonatomic) NSUInteger queryID; // ivar: _queryID
@property (retain, nonatomic) MADVIVisualSearchGatingResultItem *resultItem; // ivar: _resultItem
@property (retain, nonatomic) MADVIVisualSearchResultItem *searchItem; // ivar: _searchItem
@property (readonly, nonatomic) BOOL shouldPlaceInCorner;


-(BOOL)_hasFocalPoint;
-(id)initWithGatingResultItem:(id)arg0 domain:(id)arg1 ;
-(id)initWithSearchResultItem:(id)arg0 ;


@end


#endif