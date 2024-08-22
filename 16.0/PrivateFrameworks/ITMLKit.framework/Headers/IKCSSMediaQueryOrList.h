// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSMEDIAQUERYORLIST_H
#define IKCSSMEDIAQUERYORLIST_H



#import "IKCSSMediaQueryList.h"
#import "IKMutableArray.h"

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}




-(BOOL)evaluate;
-(NSUInteger)count;
-(id)description;
-(id)expressionAsString;
-(id)init;
-(id)subQueryAtIndex:(NSUInteger)arg0 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg0 ;


@end


#endif