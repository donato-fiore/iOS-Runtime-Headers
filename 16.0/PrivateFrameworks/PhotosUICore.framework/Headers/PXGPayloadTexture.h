// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPAYLOADTEXTURE_H
#define PXGPAYLOADTEXTURE_H

@protocol NSCopying;


#import "PXGBaseTexture.h"

@interface PXGPayloadTexture : PXGBaseTexture {
    int _presentationType;
}


@property (readonly, copy, nonatomic) NSObject<NSCopying> *payload; // ivar: _payload
@property (readonly, nonatomic) int presentationType;


-(BOOL)isOpaque;
-(NSInteger)estimatedByteSize;
-(id)init;
-(id)initWithPayload:(id)arg0 presentationType:(int)arg1 ;
-(struct CGImage *)imageRepresentation;
-(struct CGSize )pixelSize;


@end


#endif