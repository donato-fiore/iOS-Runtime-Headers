// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSKNOWLEDGESTOREPUBLISHER_H
#define BPSKNOWLEDGESTOREPUBLISHER_H

@class BPSPublisher, _DKEventQuery;
@protocol _DKKnowledgeQuerying;



@interface BPSKnowledgeStorePublisher : BPSPublisher

@property (readonly, nonatomic) _DKEventQuery *query; // ivar: _query
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store


+(id)new;
-(id)init;
-(id)initWithEventQuery:(id)arg0 knowledgeStore:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif