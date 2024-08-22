// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHCALENDARUNITNODECOLLECTION_H
#define PGGRAPHCALENDARUNITNODECOLLECTION_H

@class NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphDateNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"

@interface PGGraphCalendarUnitNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(NSUInteger)calendarUnit;
+(id)calendarUnitNodesForUnitValue:(NSInteger)arg0 inGraph:(id)arg1 ;
+(id)calendarUnitNodesForUnitValues:(id)arg0 inGraph:(id)arg1 ;
+(id)dateOfCalendarUnit;
+(id)filter;


@end


#endif