// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHOLIDAYNODECOLLECTION_H
#define PGGRAPHHOLIDAYNODECOLLECTION_H

@class NSString, NSSet;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphDateNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"

@interface PGGraphHolidayNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphMomentNodeCollection *celebratingMomentNodes;
@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *holidayNames;
@property (readonly, nonatomic) NSSet *localizedHolidayNames;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)holidayNodesWithCategory:(NSUInteger)arg0 inGraph:(id)arg1 ;
+(id)holidayNodesWithName:(id)arg0 inGraph:(id)arg1 ;
+(id)holidayNodesWithNames:(id)arg0 inGraph:(id)arg1 ;


@end


#endif