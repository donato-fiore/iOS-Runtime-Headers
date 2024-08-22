// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONLIBRARYQUERY_H
#define SBHICONLIBRARYQUERY_H

@class NSPredicate, NSString, NSArray, UITextRange;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBHIconLibraryQuery : NSObject <NSCopying>

 {
    NSPredicate *_predicate;
}


@property (readonly, nonatomic) id *comparator;
@property (copy, nonatomic) NSString *keyboardLanguageHint; // ivar: _keyboardLanguageHint
@property (readonly, copy, nonatomic) NSArray *markedTextArray; // ivar: _markedTextArray
@property (readonly, copy, nonatomic) UITextRange *markedTextRange; // ivar: _markedTextRange
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString


+(BOOL)string:(id)arg0 matchesSearchString:(id)arg1 ;
-(BOOL)_hasSearchString;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_composeComparator:(SEL)arg0 andComparator:(id)arg1 ;
-(id)aToZComparator:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMarkedTextSearchString:(id)arg0 markedTextRange:(id)arg1 markedTextArray:(id)arg2 ;
-(id)initWithSearchString:(id)arg0 ;
-(id)prefixComparator:(SEL)arg0 ;


@end


#endif