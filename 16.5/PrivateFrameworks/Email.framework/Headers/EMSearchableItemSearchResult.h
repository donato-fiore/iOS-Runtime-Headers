// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMSEARCHABLEITEMSEARCHRESULT_H
#define EMSEARCHABLEITEMSEARCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EMSearchableItemSearchResult : NSObject

@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, copy, nonatomic) NSArray *snippetData; // ivar: _snippetData


-(id)initWithIdentifiers:(id)arg0 snippetData:(id)arg1 ;


@end


#endif