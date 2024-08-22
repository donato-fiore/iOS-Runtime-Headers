// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETEDIRECTORYSERVERSEARCH_H
#define CNAUTOCOMPLETEDIRECTORYSERVERSEARCH_H

@class CNContactStore, NSString;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>


@interface CNAutocompleteDirectoryServerSearch : NSObject <CNAutocompleteSearch>



@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchContactsForFetchRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif