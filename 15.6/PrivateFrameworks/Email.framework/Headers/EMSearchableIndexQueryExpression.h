// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMSEARCHABLEINDEXQUERYEXPRESSION_H
#define EMSEARCHABLEINDEXQUERYEXPRESSION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EMSearchableIndexQueryExpression : NSObject <NSCopying>



@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)expressionWithQueryString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithQueryString:(id)arg0 ;


@end


#endif