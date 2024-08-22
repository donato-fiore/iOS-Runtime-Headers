// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPREANALYSISIMAGEENTRY_H
#define VCPPREANALYSISIMAGEENTRY_H


#import <Foundation/Foundation.h>


@interface VCPPreAnalysisImageEntry : NSObject {
    CF<__CVBuffer *> _pixelBuffer;
}


@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;


-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif