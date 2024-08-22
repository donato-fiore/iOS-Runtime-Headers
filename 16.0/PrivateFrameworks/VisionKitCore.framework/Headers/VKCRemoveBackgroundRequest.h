// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCREMOVEBACKGROUNDREQUEST_H
#define VKCREMOVEBACKGROUNDREQUEST_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "VKCImageAnalyzerRequest.h"

@interface VKCRemoveBackgroundRequest : NSObject {
    os_unfair_lock_s _lock;
    int _requestID;
    *__CVBuffer _pixelBuffer;
}


@property (readonly, nonatomic) *CGImage CGImage; // ivar: _CGImage
@property (nonatomic) int MADRequestID;
@property (retain, nonatomic) NSNumber *VIImageType; // ivar: _VIImageType
@property (nonatomic) BOOL cropToFit; // ivar: _cropToFit
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (nonatomic) BOOL maskOnly; // ivar: _maskOnly
@property (nonatomic) BOOL performInPlace; // ivar: _performInPlace
@property (readonly, nonatomic) VKCImageAnalyzerRequest *photosRequest; // ivar: _photosRequest
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)requestWithImage:(struct CGImage *)arg0 orientation:(NSInteger)arg1 canResize:(BOOL)arg2 ;
-(id)createMADRequest;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(NSInteger)arg1 ;
-(id)initWithPhotosAnalyzerRequest:(id)arg0 ;
-(void)dealloc;


@end


#endif