// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMSEARCHABLEINDEXQUERYEXPRESSION_H
#define EMSEARCHABLEINDEXQUERYEXPRESSION_H

@class NSString, CSSuggestion;
@protocol NSCopying, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EMSearchableIndexQueryExpression : NSObject <NSCopying, EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CSSuggestion *updatedSuggestion; // ivar: _updatedSuggestion
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)expressionWithQueryString:(id)arg0 ;
+(id)expressionWithQueryString:(id)arg0 searchString:(id)arg1 updatedSuggestion:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithQueryString:(id)arg0 searchString:(id)arg1 updatedSuggestion:(id)arg2 ;


@end


#endif