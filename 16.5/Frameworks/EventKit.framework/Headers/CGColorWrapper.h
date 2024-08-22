// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CGCOLORWRAPPER_H
#define CGCOLORWRAPPER_H


#import <Foundation/Foundation.h>


@interface CGColorWrapper : NSObject {
    *CGColor _color;
}


@property (readonly, nonatomic) *CGColor color;


-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(void)dealloc;


@end


#endif