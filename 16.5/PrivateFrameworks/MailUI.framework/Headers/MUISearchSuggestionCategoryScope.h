// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHSUGGESTIONCATEGORYSCOPE_H
#define MUISEARCHSUGGESTIONCATEGORYSCOPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MUISearchSuggestionCategoryScope : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *parsecScope; // ivar: _parsecScope
@property (copy, nonatomic) id *predicateApplier; // ivar: _predicateApplier
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)scopeWithTitle:(id)arg0 identifier:(id)arg1 ;
-(id)description;
-(id)predicateForSuggestion:(id)arg0 ;


@end


#endif