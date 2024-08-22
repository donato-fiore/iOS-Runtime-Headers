// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIUPDATEMYPHOTOREQUEST_H
#define AAUIUPDATEMYPHOTOREQUEST_H

@class AARequest, ACAccount, UIImage, NSValue;



@interface AAUIUpdateMyPhotoRequest : AARequest {
    ACAccount *_account;
    UIImage *_photo;
    NSValue *_cropRect;
}




+(id)_downsampleImage:(id)arg0 fromStartingQuality:(CGFloat)arg1 toEndingQuality:(CGFloat)arg2 increment:(CGFloat)arg3 maxLength:(NSUInteger)arg4 ;
+(id)_fullScreen2ImageFromImage:(id)arg0 cropRect:(id)arg1 fullScreenCropRect:(*id)arg2 ;
-(id)initWithAccount:(id)arg0 photo:(id)arg1 cropRect:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif