// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPARTOFWEEKNODECOLLECTION_H
#define PGGRAPHPARTOFWEEKNODECOLLECTION_H



#import "PGGraphNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphPartOfWeekNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(Class)nodeClass;


@end


#endif