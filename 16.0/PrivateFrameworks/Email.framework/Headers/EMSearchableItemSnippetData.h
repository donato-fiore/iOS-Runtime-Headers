// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMSEARCHABLEITEMSNIPPETDATA_H
#define EMSEARCHABLEITEMSNIPPETDATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface EMSearchableItemSnippetData : NSObject

@property (copy, nonatomic) NSString *searchableItemIdentifier; // ivar: _searchableItemIdentifier
@property (copy, nonatomic) NSDictionary *snippetHints; // ivar: _snippetHints


-(id)initWithSearchableItemIdentifier:(id)arg0 snippetHints:(id)arg1 ;


@end


#endif