// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUILAYERSTACKRENDITION_H
#define _CUILAYERSTACKRENDITION_H

@class CUIRawDataRendition, NSMutableArray;


#import "CUIRenditionMetrics.h"

@interface _CUILayerStackRendition : CUIRawDataRendition {
    CUIRenditionMetrics *_renditionMetrics;
    NSMutableArray *_layers;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)layerReferences;
-(id)metrics;
-(void)dealloc;


@end


#endif