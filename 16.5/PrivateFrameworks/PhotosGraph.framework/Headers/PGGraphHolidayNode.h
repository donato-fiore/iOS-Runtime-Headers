// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHHOLIDAYNODE_H
#define PGGRAPHHOLIDAYNODE_H

@class NSString;
@protocol PGGraphLocalizable, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphHolidayNodeCollection.h"

@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGGraphLocalizable, PGAssetCollectionFeature>



@property (nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) PGGraphHolidayNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)datesOfCelebration;
+(id)filter;
+(id)holidayNodeFilterWithCategory:(NSUInteger)arg0 ;
+(id)holidayNodeFilterWithNames:(id)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithName:(id)arg0 category:(NSUInteger)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(unsigned short)domain;
-(void)enumerateCelebratingMomentNodesUsingBlock:(id)arg0 ;


@end


#endif