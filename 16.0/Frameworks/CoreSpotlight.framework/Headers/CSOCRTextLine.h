// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSOCRTEXTLINE_H
#define CSOCRTEXTLINE_H


#import <Foundation/Foundation.h>


@interface CSOCRTextLine : NSObject {
    NSString" _strings;
    CGFloat _scores;
    CGRect _textBounds;
    NSInteger _count;
    BOOL _isTitle;
}




-(id)description;
-(id)initWithTextBounds:(struct CGRect )arg0 isTitle:(BOOL)arg1 ;
-(void)addCandidate:(id)arg0 confidence:(CGFloat)arg1 ;
-(void)appendToString:(id)arg0 ;


@end


#endif