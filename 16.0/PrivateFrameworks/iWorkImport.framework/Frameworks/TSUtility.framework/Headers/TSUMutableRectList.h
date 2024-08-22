// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUMUTABLERECTLIST_H
#define TSUMUTABLERECTLIST_H



#import "TSURectList.h"

@interface TSUMutableRectList : TSURectList



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addRect:(struct CGRect )arg0 ;
-(void)addRectList:(id)arg0 ;
-(void)applyTransform:(struct CGAffineTransform )arg0 ;
-(void)insertRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(void)makeEmpty;
-(void)replaceRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(void)setList:(id)arg0 ;


@end


#endif