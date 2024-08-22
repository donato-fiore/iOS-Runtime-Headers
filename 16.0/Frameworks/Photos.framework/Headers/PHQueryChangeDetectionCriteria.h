// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHQUERYCHANGEDETECTIONCRITERIA_H
#define PHQUERYCHANGEDETECTIONCRITERIA_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying>

 {
    NSMutableDictionary *_attributeIndexValuesByEntityName;
    NSMutableDictionary *_relationshipIndexValuesByEntityName;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPLQueryChangeDetectionCriteria:(id)arg0 ;
-(void)enumerateEntitiesAndAttributeIndexesUsingBlock:(id)arg0 ;
-(void)enumerateEntitiesAndRelationshipIndexesBlock:(id)arg0 ;


@end


#endif