// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMPLETIONSTRINGMODEL_H
#define SEARCHUICOMPLETIONSTRINGMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SearchUICompletionStringModel : NSObject

@property (readonly, nonatomic) NSString *displayedText; // ivar: _displayedText
@property (readonly, nonatomic) BOOL hasMarkedText; // ivar: _hasMarkedText
@property (readonly, nonatomic) NSUInteger queryId; // ivar: _queryId
@property (readonly, nonatomic) BOOL searchFieldHasTokens; // ivar: _searchFieldHasTokens


-(id)initWithTypedString:(id)arg0 hasTokens:(BOOL)arg1 queryId:(NSUInteger)arg2 hasMarkedText:(BOOL)arg3 ;


@end


#endif