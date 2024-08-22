// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLQUERYCHANGEDETECTIONCRITERIA_H
#define PLQUERYCHANGEDETECTIONCRITERIA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLQueryChangeDetectionCriteria : NSObject {
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}


@property (readonly) BOOL isEmpty;


-(id)description;
-(id)init;
-(void)addAttributeKeyPath:(id)arg0 forEntityName:(id)arg1 ;
-(void)addRelationshipKeyPath:(id)arg0 forEntityName:(id)arg1 ;
-(void)enumerateEntitiesAndAttributesUsingBlock:(id)arg0 ;
-(void)enumerateEntitiesAndRelationshipsUsingBlock:(id)arg0 ;


@end


#endif