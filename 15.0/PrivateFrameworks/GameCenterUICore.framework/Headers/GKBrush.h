// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKBRUSH_H
#define GKBRUSH_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GKBrush : NSObject <NSCopying>





+(id)brush;
-(CGFloat)scaleForInput:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)drawnImageForSize:(struct CGSize )arg0 opaque:(BOOL)arg1 input:(id)arg2 ;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;


@end


#endif