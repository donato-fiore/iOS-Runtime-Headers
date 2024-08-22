// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIDEOCORRUPTOR_H
#define CAMVIDEOCORRUPTOR_H


#import <Foundation/Foundation.h>


@interface CAMVideoCorruptor : NSObject



+(BOOL)corruptVideoFileAtURLWhenEnabled:(id)arg0 ;
+(int)_corruptMethodFytpForFile:(struct __sFILE *)arg0 ofSize:(NSInteger)arg1 ;
+(int)_corruptMethodMdatForFile:(struct __sFILE *)arg0 ofSize:(NSInteger)arg1 ;
+(int)_corruptMethodMoovForFile:(struct __sFILE *)arg0 ofSize:(NSInteger)arg1 ;
+(int)_findBox:(unsigned int)arg0 inFile:(struct __sFILE *)arg1 ofSize:(NSInteger)arg2 boxSize:(*NSInteger)arg3 ;
+(int)_getBoxInfoFromFile:(struct __sFILE *)arg0 ofSize:(NSInteger)arg1 boxType:(*unsigned int)arg2 boxSize:(*NSInteger)arg3 ;


@end


#endif