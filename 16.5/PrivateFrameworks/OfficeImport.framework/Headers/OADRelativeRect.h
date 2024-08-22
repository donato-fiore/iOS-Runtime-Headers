// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADRELATIVERECT_H
#define OADRELATIVERECT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADRelativeRect : NSObject <NSCopying>

 {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)bottom;
-(float)left;
-(float)right;
-(float)top;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithLeft:(float)arg0 top:(float)arg1 right:(float)arg2 bottom:(float)arg3 ;
-(void)setBottom:(float)arg0 ;
-(void)setLeft:(float)arg0 ;
-(void)setRight:(float)arg0 ;
-(void)setTop:(float)arg0 ;


@end


#endif