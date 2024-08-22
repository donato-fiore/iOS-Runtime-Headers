// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLCHECKERBOARDTEXTURE_H
#define MDLCHECKERBOARDTEXTURE_H



#import "MDLTexture.h"

@interface MDLCheckerboardTexture : MDLTexture {
    int _divisions;
    *CGColor _color1;
    *CGColor _color2;
}


@property (nonatomic) *CGColor color1;
@property (nonatomic) *CGColor color2;
@property (nonatomic) float divisions;


-(id)generateDataAtLevel:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)initWithDivisions:(float)arg0 name:(id)arg1 dimensions:(int)arg2 channelCount:(NSInteger)arg3 channelEncoding:(struct CGColor *)arg4 color1:(struct CGColor *)arg5 color2;
-(void)dealloc;


@end


#endif