// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDSERIESCOLLECTION_H
#define CHDSERIESCOLLECTION_H



#import "EDSortedCollection.h"
#import "CHDChart.h"

@interface CHDSeriesCollection : EDSortedCollection {
    CHDChart *mChart;
}




+(id)seriesCollectionWithChart:(id)arg0 ;
-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)nonEmptySeriesCount;
-(id)firstNonEmptySeries;
-(id)initWithChart:(id)arg0 ;


@end


#endif