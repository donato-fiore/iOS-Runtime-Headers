// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUIRAWDATARENDITION_H
#define _CUIRAWDATARENDITION_H

@class NSData;


#import "CUIThemeRendition.h"

@interface _CUIRawDataRendition : CUIThemeRendition {
    NSData *_dataBytes;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)data;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(int)pixelFormat;
-(void)dealloc;


@end


#endif