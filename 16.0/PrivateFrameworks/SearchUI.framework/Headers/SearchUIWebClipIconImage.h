// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIWEBCLIPICONIMAGE_H
#define SEARCHUIWEBCLIPICONIMAGE_H

@class UIWebClip;


#import "SearchUIAppIconImage.h"

@interface SearchUIWebClipIconImage : SearchUIAppIconImage

@property (retain, nonatomic) UIWebClip *webClip; // ivar: _webClip


+(id)convertImage:(id)arg0 ofSize:(struct CGSize )arg1 withShape:(NSUInteger)arg2 scale:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)generateImageWithFormat:(int)arg0 scale:(CGFloat)arg1 ;
-(id)initWithWebClip:(id)arg0 variant:(NSUInteger)arg1 ;
-(id)uniqueIdentifier;


@end


#endif