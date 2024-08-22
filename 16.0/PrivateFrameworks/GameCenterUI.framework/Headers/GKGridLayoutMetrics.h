// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKGRIDLAYOUTMETRICS_H
#define GKGRIDLAYOUTMETRICS_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GKGridLayoutMetrics : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *keyToMetrics; // ivar: _keyToMetrics
@property (retain, nonatomic) NSString *layoutKey; // ivar: _layoutKey
@property (retain, nonatomic) NSMutableDictionary *locationToKeyList; // ivar: _locationToKeyList


+(id)metrics;
-(NSInteger)prepareLayout:(id)arg0 startingAtSection:(NSInteger)arg1 ;
-(id)_gkDescription;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)keyListForLocation:(NSUInteger)arg0 ;
-(id)listForLocation:(NSUInteger)arg0 ;
-(id)localDescription;
-(id)supplementaryMetricsForKey:(id)arg0 ;
-(void)addSupplementaryMetrics:(id)arg0 forKey:(id)arg1 atLocation:(NSUInteger)arg2 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)enumerateSupplementaryLocations:(id)arg0 ;
-(void)enumerateSupplementaryMetricsUsingBlock:(id)arg0 ;
-(void)insertSupplementaryMetrics:(id)arg0 forKey:(id)arg1 atLocation:(NSUInteger)arg2 ;
-(void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg0 atLocation:(NSUInteger)arg1 globalRange:(struct _NSRange )arg2 ;
-(void)removeSupplementaryMetricsForKey:(id)arg0 ;
-(void)replaceSupplementaryMetrics:(id)arg0 forKey:(id)arg1 ;


@end


#endif