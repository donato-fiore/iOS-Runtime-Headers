// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSMEDIAQUERYANDLIST_H
#define IKCSSMEDIAQUERYANDLIST_H

@class NSString;


#import "IKCSSMediaQueryList.h"
#import "IKMutableArray.h"

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}


@property BOOL negated; // ivar: _negated
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)evaluate;
-(NSUInteger)count;
-(id)description;
-(id)expressionAsString;
-(id)expressionList;
-(id)init;
-(id)subQueryAtIndex:(NSUInteger)arg0 ;
-(void)addQuery:(id)arg0 ;


@end


#endif