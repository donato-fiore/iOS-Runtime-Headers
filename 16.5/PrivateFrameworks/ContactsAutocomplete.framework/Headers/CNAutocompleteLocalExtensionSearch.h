// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETELOCALEXTENSIONSEARCH_H
#define CNAUTOCOMPLETELOCALEXTENSIONSEARCH_H

@class CLSDataStore, NSString;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>


@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch>



@property (readonly, nonatomic) CLSDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchContactsForFetchRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;


@end


#endif