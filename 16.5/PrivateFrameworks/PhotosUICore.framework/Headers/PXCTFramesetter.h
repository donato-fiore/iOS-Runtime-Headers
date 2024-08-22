// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCTFRAMESETTER_H
#define PXCTFRAMESETTER_H

@class NSAttributedString, NSShadow;

#import <Foundation/Foundation.h>


@interface PXCTFramesetter : NSObject {
    BOOL _prepared;
}


@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) *CGContext context; // ivar: _context
@property (readonly, nonatomic) *__CTFramesetter framesetter; // ivar: _framesetter
@property (readonly, nonatomic) NSShadow *shadow; // ivar: _shadow


-(id)frameWithRect:(struct CGRect )arg0 maximumLineCount:(NSUInteger)arg1 allowTruncation:(BOOL)arg2 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)dealloc;
-(void)prepare;


@end


#endif