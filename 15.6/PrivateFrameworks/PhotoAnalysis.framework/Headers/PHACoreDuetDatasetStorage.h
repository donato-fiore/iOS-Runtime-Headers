// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHACOREDUETDATASETSTORAGE_H
#define PHACOREDUETDATASETSTORAGE_H

@protocol _DKKnowledgeSaving><_DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface PHACoreDuetDatasetStorage : NSObject

@property (readonly, nonatomic) NSObject<_DKKnowledgeSaving><_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore


-(id)_getEventStreamForDatasetName:(id)arg0 ;
-(id)init;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(id)samplesForDataset:(id)arg0 subset:(id)arg1 ;
-(void)addSample:(id)arg0 toDataset:(id)arg1 ;


@end


#endif