// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EPBORDER_H
#define EPBORDER_H



#import "EDBorder.h"

@interface EPBorder : EDBorder {
    NSUInteger mPrecedence;
}




+(id)borderWithBorder:(id)arg0 precedence:(NSUInteger)arg1 resources:(id)arg2 ;
-(BOOL)isEqualToBorder:(id)arg0 ;
-(NSUInteger)precedence;
-(id)initWithBorder:(id)arg0 precedence:(NSUInteger)arg1 resources:(id)arg2 ;


@end


#endif