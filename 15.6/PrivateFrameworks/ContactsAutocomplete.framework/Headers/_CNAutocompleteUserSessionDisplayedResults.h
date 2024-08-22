// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNAUTOCOMPLETEUSERSESSIONDISPLAYEDRESULTS_H
#define _CNAUTOCOMPLETEUSERSESSIONDISPLAYEDRESULTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchRequest.h"

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject

@property (nonatomic) BOOL containsDuetResults; // ivar: _containsDuetResults
@property (retain, nonatomic) NSMutableDictionary *datesByBatchIndexes; // ivar: _datesByBatchIndexes
@property (nonatomic) BOOL ignored; // ivar: _ignored
@property (readonly, nonatomic) CNAutocompleteFetchRequest *request; // ivar: _request


-(BOOL)relevantForRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)didReceiveBatch:(NSUInteger)arg0 ;


@end


#endif