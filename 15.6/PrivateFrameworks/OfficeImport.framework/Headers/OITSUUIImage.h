// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSUUIIMAGE_H
#define OITSUUIIMAGE_H

@class UIImage;


#import "OITSUImage.h"
#import "OITSUUIImageAutoreleasePoolGuard.h"

@interface OITSUUIImage : OITSUImage {
    UIImage *mUIImage;
    OITSUUIImageAutoreleasePoolGuard *mGuard;
}




+(id)imageNamed:(id)arg0 ;
+(void)i_performBlockWithUIImageLock:(id)arg0 ;
-(CGFloat)scale;
-(NSInteger)imageOrientation;
-(id)UIImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithUIImage:(id)arg0 ;
-(id)p_initWithUIImage:(id)arg0 needsGuard:(BOOL)arg1 ;
-(struct CGImage *)CGImage;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 ;
-(struct CGSize )size;
-(void)dealloc;


@end


#endif