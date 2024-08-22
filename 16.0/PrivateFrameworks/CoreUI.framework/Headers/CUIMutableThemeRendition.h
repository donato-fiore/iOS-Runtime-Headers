// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIMUTABLETHEMERENDITION_H
#define CUIMUTABLETHEMERENDITION_H



#import "CUIThemeRendition.h"
#import "CUIRenditionSliceInformation.h"
#import "CUIRenditionMetrics.h"

@interface CUIMutableThemeRendition : CUIThemeRendition {
    *_renditionkeytoken _renditionKey;
    *CGImage _image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}




-(id)initWithCGImage:(struct CGImage *)arg0 withDescription:(id)arg1 forKey:(struct _renditionkeytoken *)arg2 ;
-(id)metrics;
-(id)sliceInformation;
-(struct CGImage *)unslicedImage;
-(struct _renditionkeytoken *)key;
-(void)dealloc;
-(void)setName:(id)arg0 ;


@end


#endif