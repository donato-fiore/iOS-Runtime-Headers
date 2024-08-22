// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETERECENTSSEARCH_H
#define CNAUTOCOMPLETERECENTSSEARCH_H

@class NSString, CRRecentContactsLibrary;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>


@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRRecentContactsLibrary *library; // ivar: _library
@property (readonly) Class superclass;


-(id)autocompleteResultsForRecentContacts:(id)arg0 request:(id)arg1 ;
-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithCoreRecentContactsLibrary:(id)arg0 ;


@end


#endif