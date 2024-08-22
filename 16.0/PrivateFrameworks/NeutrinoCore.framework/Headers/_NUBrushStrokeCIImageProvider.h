// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUBRUSHSTROKECIIMAGEPROVIDER_H
#define _NUBRUSHSTROKECIIMAGEPROVIDER_H


#import <Foundation/Foundation.h>

#import "NUBrushStroke.h"

@interface _NUBrushStrokeCIImageProvider : NSObject {
    NUBrushStroke *_stroke;
    BOOL _closed;
    NSInteger _pressureMode;
    ? _extent;
}




-(id)initWithStroke:(id)arg0 closed:(BOOL)arg1 pressureMode:(NSInteger)arg2 ;
-(void)provideImageData:(*void)arg0 bytesPerRow:(NSUInteger)arg1 origin:(NSUInteger)arg2 size:(NSUInteger)arg4 userInfo:(id)arg6 ;


@end


#endif