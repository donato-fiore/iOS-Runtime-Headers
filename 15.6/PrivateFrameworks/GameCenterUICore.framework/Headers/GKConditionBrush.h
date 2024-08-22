// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCONDITIONBRUSH_H
#define GKCONDITIONBRUSH_H

@class NSPredicate;


#import "GKBrush.h"

@interface GKConditionBrush : GKBrush

@property (retain, nonatomic) GKBrush *noBrush; // ivar: _noBrush
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) GKBrush *yesBrush; // ivar: _yesBrush


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;


@end


#endif