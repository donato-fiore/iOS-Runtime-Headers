// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUICOMPLETIONSTRINGMODEL_H
#define SPUICOMPLETIONSTRINGMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SPUICompletionStringModel : NSObject

@property (readonly, nonatomic) NSString *displayedText; // ivar: _displayedText
@property (readonly, nonatomic) BOOL hasMarkedText; // ivar: _hasMarkedText
@property (readonly, nonatomic) NSUInteger queryId; // ivar: _queryId
@property (readonly, nonatomic) BOOL searchFieldHasTokens; // ivar: _searchFieldHasTokens


-(id)initWithTypedString:(id)arg0 hasTokens:(BOOL)arg1 queryId:(NSUInteger)arg2 hasMarkedText:(BOOL)arg3 ;


@end


#endif