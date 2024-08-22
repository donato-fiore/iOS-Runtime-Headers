// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODCURARECOREDUETSTORAGE_H
#define ODCURARECOREDUETSTORAGE_H

@class NSString, _DKEventStream;
@protocol _DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ODCurareCoreDuetStorage : NSObject

@property (retain) NSObject<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain) NSString *name; // ivar: _name
@property (retain) _DKEventStream *stream; // ivar: _stream


+(id)predicateWithIdentifier:(id)arg0 withDate:(id)arg1 ;
-(BOOL)deleteAllData;
-(BOOL)deleteData:(id)arg0 ;
-(BOOL)deleteDataWithPredicate:(id)arg0 ;
-(BOOL)saveDictionaries:(id)arg0 date:(id)arg1 eventIdentifier:(id)arg2 ;
-(BOOL)saveMetadata:(id)arg0 date:(id)arg1 eventIdentifier:(id)arg2 ;
-(NSUInteger)deleteMultipleData:(id)arg0 ;
-(NSUInteger)deleteMultipleDataWithPredicate:(id)arg0 ;
-(id)init:(id)arg0 ;
-(id)queryDataWithPredicate:(id)arg0 ;
-(void)deleteDirectory:(id)arg0 ;


@end


#endif