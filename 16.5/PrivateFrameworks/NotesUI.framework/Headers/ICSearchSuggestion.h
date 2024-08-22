// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSEARCHSUGGESTION_H
#define ICSEARCHSUGGESTION_H

@class _UISearchSuggestionItem_dci, UIImage, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICSearchSuggestion : NSObject <NSCopying>



@property (readonly, nonatomic) _UISearchSuggestionItem_dci *dciSuggestion;
@property (readonly, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) NSString *subQueryString; // ivar: _subQueryString
@property (readonly, nonatomic) NSString *suggestionItemTitle; // ivar: _suggestionItemTitle
@property (readonly, nonatomic) NSString *tokenTitle; // ivar: _tokenTitle
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)suggestionTypeOfFirstItemInSuggestions:(id)arg0 ;
+(id)orderedSearchSuggestions;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif