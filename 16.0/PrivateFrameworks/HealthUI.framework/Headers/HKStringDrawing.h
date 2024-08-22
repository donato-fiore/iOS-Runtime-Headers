// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSTRINGDRAWING_H
#define HKSTRINGDRAWING_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HKStringDrawing : NSObject

@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (nonatomic) CGRect rect; // ivar: _rect
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)stringDrawingWithText:(id)arg0 inRect:(struct CGRect )arg1 withAttributes:(id)arg2 ;
+(void)drawStrings:(id)arg0 outlineWidth:(CGFloat)arg1 outlineColor:(id)arg2 context:(struct CGContext *)arg3 ;
-(id)initWithText:(id)arg0 inRect:(struct CGRect )arg1 withAttributes:(id)arg2 ;
-(void)draw;


@end


#endif