// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXBITMAP_H
#define FXBITMAP_H

@protocol NSCopying;


#import "FxImage.h"

@interface FxBitmap : FxImage <NSCopying>

 {
    *FxBitmapPriv _bitmapPriv;
}




+(void)setGuaranteeMemoryCallback:(*unk)arg0 ;
-(*void)dataPtr;
-(*void)dataPtrForPositionX:(NSUInteger)arg0 Y:(NSUInteger)arg1 ;
-(BOOL)_ownsData;
-(BOOL)_verifyImage;
-(NSUInteger)_packedRowBytes;
-(NSUInteger)rowBytes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCopy:(id)arg0 ;
-(id)initWithCopy:(id)arg0 andInfo:(struct ? )arg1 ;
-(id)initWithCopy:(id)arg0 andInfo:(struct ? )arg1 andRowBytes:(NSUInteger)arg2 ;
-(id)initWithInfo:(struct ? )arg0 ;
-(id)initWithInfo:(struct ? )arg0 andData:(*void)arg1 ;
-(id)initWithInfo:(struct ? )arg0 rowBytes:(NSUInteger)arg1 andData:(*void)arg2 ;
-(void)_setOwned:(BOOL)arg0 ;
-(void)_setOwnedDataPtr:(*void)arg0 ;
-(void)dealloc;
-(void)setRowBytes:(NSUInteger)arg0 ;


@end


#endif