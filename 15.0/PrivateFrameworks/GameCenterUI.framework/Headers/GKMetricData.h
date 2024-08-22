// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMETRICDATA_H
#define GKMETRICDATA_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "GKGridLayoutMetrics.h"
#import "GKSectionMetrics.h"

@interface GKMetricData : NSObject

@property (nonatomic) NSUInteger currentMaxVisibleItemCount; // ivar: _currentMaxVisibleItemCount
@property (nonatomic) NSUInteger filteredTotalItemCount; // ivar: _filteredTotalItemCount
@property (retain, nonatomic) NSMutableArray *footerPinnableAttributes; // ivar: _footerPinnableAttributes
@property (retain, nonatomic) NSMutableArray *headerPinnableAttributes; // ivar: _headerPinnableAttributes
@property (readonly, nonatomic) NSString *layoutKey;
@property (retain, nonatomic) GKGridLayoutMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) GKSectionMetrics *sectionMetrics;


-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)localDescription;
-(void)addAttributes:(id)arg0 forLocation:(NSUInteger)arg1 ;


@end


#endif