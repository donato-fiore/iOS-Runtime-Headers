// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPSIZE_H
#define LPSIZE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"

@interface LPSize : NSObject <NSCopying>



@property (readonly, nonatomic) CGSize asSize;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, retain, nonatomic) LPPointUnit *height; // ivar: _height
@property (readonly, retain, nonatomic) LPPointUnit *width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSquarePoints:(id)arg0 ;
-(id)initWithSquareSize:(CGFloat)arg0 ;


@end


#endif