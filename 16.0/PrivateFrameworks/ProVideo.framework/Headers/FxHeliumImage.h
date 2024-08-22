// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXHELIUMIMAGE_H
#define FXHELIUMIMAGE_H



#import "FxImage.h"

@interface FxHeliumImage : FxImage {
    *void _heliumImagePriv;
}




-(*void)heliumNode;
-(NSUInteger)imageType;
-(id)initWithInfo:(struct ? )arg0 ;
-(id)initWithInfo:(struct ? )arg0 andHeliumNode:(*void)arg1 ;
-(id)initWithInfo:(struct ? )arg0 andHeliumRef:(*void)arg1 ;
-(struct HGRef<HGNode> )heliumRef;
-(void)dealloc;
-(void)setHeliumNode:(*void)arg0 ;
-(void)setHeliumRef:(*void)arg0 ;


@end


#endif