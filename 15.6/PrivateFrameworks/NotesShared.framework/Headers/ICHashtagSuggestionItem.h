// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICHASHTAGSUGGESTIONITEM_H
#define ICHASHTAGSUGGESTIONITEM_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ICHashtagSuggestionItem : NSObject

@property (retain, nonatomic) NSString *displayText; // ivar: _displayText
@property (retain, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (retain, nonatomic) NSString *tokenContentIdentifier; // ivar: _tokenContentIdentifier


+(id)sortedItems:(id)arg0 context:(id)arg1 ;
+(id)sortedSuggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)arg0 context:(id)arg1 ;
+(id)suggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif