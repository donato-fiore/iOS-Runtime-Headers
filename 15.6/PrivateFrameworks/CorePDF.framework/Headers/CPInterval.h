// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPINTERVAL_H
#define CPINTERVAL_H


#import <Foundation/Foundation.h>


@interface CPInterval : NSObject {
    CGFloat left;
    CGFloat right;
}




-(BOOL)contains:(id)arg0 ;
-(BOOL)intersects:(id)arg0 ;
-(CGFloat)left;
-(CGFloat)right;
-(id)initLeft:(CGFloat)arg0 right:(CGFloat)arg1 ;
-(void)add:(id)arg0 ;


@end


#endif