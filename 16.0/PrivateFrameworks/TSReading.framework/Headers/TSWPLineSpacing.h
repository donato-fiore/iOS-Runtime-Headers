// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLINESPACING_H
#define TSWPLINESPACING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPLineSpacing : NSObject <NSCopying>

 {
    int _mode;
    CGFloat _amount;
    CGFloat _baselineRule;
}




+(id)lineSpacing;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)amount;
-(CGFloat)baselineRule;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMode:(int)arg0 amount:(CGFloat)arg1 ;
-(id)initWithMode:(int)arg0 amount:(CGFloat)arg1 baselineRule:(CGFloat)arg2 ;
-(int)mode;


@end


#endif