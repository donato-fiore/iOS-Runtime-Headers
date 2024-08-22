// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCGESTUREFINGER_H
#define SCRCGESTUREFINGER_H


#import <Foundation/Foundation.h>


@interface SCRCGestureFinger : NSObject {
    NSUInteger _identifier;
    CGPoint _location;
    CGFloat _pressure;
}




-(CGFloat)pressure;
-(NSInteger)type;
-(NSUInteger)identifier;
-(id)description;
-(id)initWithIdentifier:(NSUInteger)arg0 location:(struct CGPoint )arg1 pressure:(CGFloat)arg2 ;
-(struct CGPoint )location;


@end


#endif