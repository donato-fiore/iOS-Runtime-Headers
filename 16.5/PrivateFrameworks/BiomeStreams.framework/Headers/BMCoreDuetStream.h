// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCOREDUETSTREAM_H
#define BMCOREDUETSTREAM_H

@class NSString, _DKEventQuery;
@protocol BMStream, _CDUserContext, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface BMCoreDuetStream : NSObject <BMStream>



@property (readonly, nonatomic) NSObject<_CDUserContext> *context; // ivar: _context
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) _DKEventQuery *query; // ivar: _query
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store


+(id)new;
-(id)init;
-(id)initWithKnowledgeStore:(id)arg0 clientContext:(id)arg1 identifier:(id)arg2 ;
-(id)publisherForQuery:(id)arg0 ;


@end


#endif