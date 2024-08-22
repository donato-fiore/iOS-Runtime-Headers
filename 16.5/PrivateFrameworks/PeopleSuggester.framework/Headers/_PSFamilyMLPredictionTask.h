// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFAMILYMLPREDICTIONTASK_H
#define _PSFAMILYMLPREDICTIONTASK_H

@class NSString;
@protocol _DKKnowledgeQuerying><_DKKnowledgeSaving;

#import <Foundation/Foundation.h>


@interface _PSFamilyMLPredictionTask : NSObject

@property (readonly, copy, nonatomic) NSString *directory; // ivar: _directory
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving> *knowledgeStore; // ivar: _knowledgeStore


-(id)contactKeysToFetch;
-(id)contactsInContactStore;
-(id)knowledgeEventUsingPredictions:(id)arg0 familyRelations:(id)arg1 ;
-(void)execute:(id)arg0 ;


@end


#endif