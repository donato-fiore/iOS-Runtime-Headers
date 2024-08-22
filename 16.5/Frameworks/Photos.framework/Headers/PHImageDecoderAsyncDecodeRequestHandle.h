// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMAGEDECODERASYNCDECODEREQUESTHANDLE_H
#define PHIMAGEDECODERASYNCDECODEREQUESTHANDLE_H


#import <Foundation/Foundation.h>

#import "PHImageDecoder.h"

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {
    atomic_flag _cancelFlag;
    BOOL _cancelRequested;
}


@property (retain, nonatomic) *CMPhotoDecompressionContainer c; // ivar: _c
@property (readonly, nonatomic) BOOL cancelRequested;
@property (retain, nonatomic) *CMPhotoDecompressionContainer figDecompressionContainer; // ivar: _figDecompressionContainer
@property (nonatomic) NSUInteger figGainMapRequestID; // ivar: _figGainMapRequestID
@property (nonatomic) NSUInteger figRequestID; // ivar: _figRequestID
@property (readonly, nonatomic) PHImageDecoder *initialDecoder; // ivar: _initialDecoder


-(id)initWithFigRequestID:(NSUInteger)arg0 container:(struct CMPhotoDecompressionContainer *)arg1 figDecoder:(id)arg2 ;
-(id)initWithImageIODecoder:(id)arg0 ;


@end


#endif