// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMKNOWLEDGECONTEXTPUBLISHER_H
#define BMKNOWLEDGECONTEXTPUBLISHER_H

@class BPSPublisher, NSString, _DKEventQuery;
@protocol BMLiveEventsPublisher, _CDUserContext, _DKKnowledgeQuerying;



@interface BMKnowledgeContextPublisher : BPSPublisher <BMLiveEventsPublisher>



@property (retain, nonatomic) NSObject<_CDUserContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeLiveEvents; // ivar: _includeLiveEvents
@property (retain, nonatomic) _DKEventQuery *query; // ivar: _query
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (readonly) Class superclass;


-(id)initWithQuery:(id)arg0 store:(id)arg1 context:(id)arg2 includeLiveEvents:(BOOL)arg3 ;
-(id)withLiveEvents;
-(void)subscribe:(id)arg0 ;


@end


#endif