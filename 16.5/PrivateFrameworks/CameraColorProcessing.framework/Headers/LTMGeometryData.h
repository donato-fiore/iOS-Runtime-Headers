// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTMGEOMETRYDATA_H
#define LTMGEOMETRYDATA_H


#import <Foundation/Foundation.h>


@interface LTMGeometryData : NSObject {
    CGRect _inputTextureRect;
    CGRect _minimumRect;
}


@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (nonatomic) unsigned int inputTextureDownsampleRatio; // ivar: _inputTextureDownsampleRatio
@property (readonly, nonatomic) CGSize inputTextureSize; // ivar: _inputTextureSize
@property (readonly, nonatomic) CGRect sourceRect; // ivar: _sourceRect


-(id)initWithInputTextureWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;


@end


#endif