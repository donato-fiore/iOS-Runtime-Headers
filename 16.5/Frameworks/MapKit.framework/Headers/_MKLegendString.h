// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKLEGENDSTRING_H
#define _MKLEGENDSTRING_H

@class CALayer, NSAttributedString;



@interface _MKLegendString : CALayer {
    *__CTLine _line;
}


@property (readonly, nonatomic) CGFloat baselineDistanceFromBottom; // ivar: _baselineDistanceFromBottom
@property (retain, nonatomic) NSAttributedString *string; // ivar: _string


-(id)actionForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sizeToFit;


@end


#endif