// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUIRECOGNITIONOBJECTRENDITION_H
#define _CUIRECOGNITIONOBJECTRENDITION_H

@class CUIRawDataRendition;



@interface _CUIRecognitionObjectRendition : CUIRawDataRendition {
    int _objectVersion;
    ? _transformation;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(int)objectVersion;
-(struct ? )transformation;
-(void)_initalizeMetadataFromCSIData:(struct _csiheader *)arg0 ;


@end


#endif