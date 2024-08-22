// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHBABYNODECOLLECTION_H
#define PGGRAPHBABYNODECOLLECTION_H



#import "PGGraphNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphBabyNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphPersonNodeCollection *caretakerNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(Class)nodeClass;


@end


#endif