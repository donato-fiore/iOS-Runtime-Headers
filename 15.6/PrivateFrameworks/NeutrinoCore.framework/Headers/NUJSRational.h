// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUJSRATIONAL_H
#define NUJSRATIONAL_H

@protocol NUJSRationalExport;

#import <Foundation/Foundation.h>


@interface NUJSRational : NSObject <NUJSRationalExport>

 {
    NSInteger _numerator;
    NSInteger _denominator;
}


@property NSInteger denominator;
@property NSInteger numerator;


-(CGFloat)toDouble;
-(id)init;
-(id)initWithNumerator:(NSInteger)arg0 denominator:(NSInteger)arg1 ;


@end


#endif