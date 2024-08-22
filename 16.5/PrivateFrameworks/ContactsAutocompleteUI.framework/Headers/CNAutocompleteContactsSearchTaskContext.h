// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETECONTACTSSEARCHTASKCONTEXT_H
#define CNAUTOCOMPLETECONTACTSSEARCHTASKCONTEXT_H

@class NSMutableSet, NSString;
@protocol CNAutocompleteSearchConsumer;

#import <Foundation/Foundation.h>


@interface CNAutocompleteContactsSearchTaskContext : NSObject

@property (readonly, nonatomic) NSObject<CNAutocompleteSearchConsumer> *consumer; // ivar: _consumer
@property (readonly, nonatomic) NSMutableSet *operations; // ivar: _operations
@property (readonly, nonatomic) NSMutableSet *searchQueries; // ivar: _searchQueries
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)contextWithConsumer:(id)arg0 text:(id)arg1 operations:(id)arg2 searchQueries:(id)arg3 ;
-(BOOL)done;


@end


#endif