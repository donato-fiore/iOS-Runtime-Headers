// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHSUGGESTION_H
#define MUISEARCHSUGGESTION_H

@class NSPredicate, CSSuggestion;
@protocol NSSecureCoding, MUISearchSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "MUISearchSuggestionCategory.h"

@interface MUISearchSuggestion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MUISearchSuggestionCategory *category;
@property (weak, nonatomic) NSObject<MUISearchSuggestionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL exactMatch;
@property (readonly, nonatomic) BOOL isLegacy;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) CGFloat ranking;
@property (readonly, nonatomic) CSSuggestion *spotlightSuggestion; // ivar: _spotlightSuggestion
@property (readonly, nonatomic) BOOL supportsRanking;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif