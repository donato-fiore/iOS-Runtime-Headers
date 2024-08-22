// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHCELEBRATINGEDGECOLLECTION_H
#define PGGRAPHCELEBRATINGEDGECOLLECTION_H



#import "PGGraphEdgeCollection.h"
#import "PGGraphHolidayNodeCollection.h"

@interface PGGraphCelebratingEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) PGGraphHolidayNodeCollection *holidayNodes;


+(Class)edgeClass;


@end


#endif