// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRERECOMMENDABLEOBJECTUTILITIES_H
#define HRERECOMMENDABLEOBJECTUTILITIES_H


#import <Foundation/Foundation.h>


@interface HRERecommendableObjectUtilities : NSObject



+(BOOL)_actionMap:(id)arg0 includesType:(id)arg1 forRecommendableObject:(id)arg2 ;
+(BOOL)recommendableObject:(id)arg0 containsObject:(id)arg1 ;
+(BOOL)recommendableObject:(id)arg0 involvedInAction:(id)arg1 ;
+(BOOL)recommendableObject:(id)arg0 involvedInActionMap:(id)arg1 ;
+(BOOL)recommendableObject:(id)arg0 isEffectivelyEqualToObject:(id)arg1 ;
+(BOOL)recommendableObjects:(id)arg0 matchAllRules:(id)arg1 ;
+(id)actionMapFromActionMap:(id)arg0 forRecommendableObject:(id)arg1 ;
+(id)filterRecommendableObjects:(id)arg0 excludingObjectsInActions:(id)arg1 ;
+(id)filterRecommendableObjects:(id)arg0 toMatchTypes:(id)arg1 ;
+(id)filterRecommendableObjects:(id)arg0 toRooms:(id)arg1 ;
+(id)recommendableObject:(id)arg0 actionBuildersDerivedFromActions:(id)arg1 ;
+(id)recommendableObjectsFromHomeKitObjects:(id)arg0 ;


@end


#endif