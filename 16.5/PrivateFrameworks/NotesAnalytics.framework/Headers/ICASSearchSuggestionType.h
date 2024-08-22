// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSEARCHSUGGESTIONTYPE_H
#define ICASSEARCHSUGGESTIONTYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASSearchSuggestionType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger searchSuggestionType; // ivar: _searchSuggestionType


-(id)initWithSearchSuggestionType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif