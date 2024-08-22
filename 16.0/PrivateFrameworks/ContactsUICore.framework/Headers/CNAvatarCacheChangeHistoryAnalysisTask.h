// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCACHECHANGEHISTORYANALYSISTASK_H
#define CNAVATARCACHECHANGEHISTORYANALYSISTASK_H

@class CNTask, CNResult, NSData, NSArray, CNChangeHistoryFetchRequest, CNContactStore;



@interface CNAvatarCacheChangeHistoryAnalysisTask : CNTask

@property (retain, nonatomic) CNResult *enumerator; // ivar: _enumerator
@property (retain, nonatomic) NSData *finalToken; // ivar: _finalToken
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) CNChangeHistoryFetchRequest *request; // ivar: _request
@property (readonly, nonatomic) NSData *startingToken; // ivar: _startingToken
@property (readonly, nonatomic) CNContactStore *store; // ivar: _store


-(id)initWithContactStore:(id)arg0 startingToken:(id)arg1 ;
-(id)run:(*id)arg0 ;
-(void)executeRequest;
-(void)extractIdentifiers;
-(void)makeRequest;


@end


#endif