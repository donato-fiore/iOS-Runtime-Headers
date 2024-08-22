// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACTIONRETRIEVER_H
#define ACTIONRETRIEVER_H

@class NSMutableDictionary;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ActionRetriever : NSObject

@property (retain, nonatomic) NSMutableDictionary *activityCache; // ivar: _activityCache
@property (retain, nonatomic) NSMutableDictionary *intentCache; // ivar: _intentCache
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore


-(id)init;
-(id)queryForActivitiesWithBundleId:(id)arg0 activityType:(id)arg1 ;
-(id)queryForIntentsWithBundleId:(id)arg0 offset:(NSUInteger)arg1 limit:(NSUInteger)arg2 ;
-(id)retrieveActivityEventForItem:(id)arg0 ;
-(id)retrieveIntentEventForItem:(id)arg0 ;


@end


#endif