// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USKTIMECODE_H
#define USKTIMECODE_H


#import <Foundation/Foundation.h>


@interface USKTimeCode : NSObject {
    SdfTimeCode _timeCode;
}




-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSUInteger)hash;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithSdfTimeCode:(struct SdfTimeCode )arg0 ;
-(struct SdfTimeCode )sdfTimeCode;


@end


#endif