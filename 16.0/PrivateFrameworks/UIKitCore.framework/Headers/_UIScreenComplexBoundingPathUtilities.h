// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCREENCOMPLEXBOUNDINGPATHUTILITIES_H
#define _UISCREENCOMPLEXBOUNDINGPATHUTILITIES_H

@class UIScreenBoundingPathUtilities;


#import "_UIBoundingPathBitmap.h"

@interface _UIScreenComplexBoundingPathUtilities : UIScreenBoundingPathUtilities {
    NSInteger _type;
    _UIBoundingPathBitmap *_bitmap;
}




+(BOOL)isScreenSupported:(id)arg0 ;
-(id)boundingPathForWindow:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(void)_loadBitmapForScreen:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif