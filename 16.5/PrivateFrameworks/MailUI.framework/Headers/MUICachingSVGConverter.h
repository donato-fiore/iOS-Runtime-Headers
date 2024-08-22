// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUICACHINGSVGCONVERTER_H
#define MUICACHINGSVGCONVERTER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface MUICachingSVGConverter : NSObject

@property (readonly, nonatomic) NSCache *cache; // ivar: _cache


-(id)init;
-(void)imageForSVGData:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 completionHandler:(id)arg3 ;


@end


#endif