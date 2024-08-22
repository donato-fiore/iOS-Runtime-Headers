// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTCONTACTSSEARCHDELEGATE_H
#define DADCLIENTCONTACTSSEARCHDELEGATE_H

@class DASearchQuery, NSData;
@protocol DASearchQueryConsumer;


#import "DADClientDelegate.h"

@interface DADClientContactsSearchDelegate : DADClientDelegate <DASearchQueryConsumer>



@property (retain, nonatomic) DASearchQuery *query; // ivar: _query
@property (retain, nonatomic) NSData *queryResultData; // ivar: _queryResultData


-(id)initWithAccountID:(id)arg0 queryDictionary:(id)arg1 client:(id)arg2 ;
-(void)beginQuery;
-(void)dealloc;
-(void)disable;
-(void)finishWithError:(id)arg0 ;
-(void)searchQuery:(id)arg0 finishedWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 returnedResults:(id)arg1 ;


@end


#endif