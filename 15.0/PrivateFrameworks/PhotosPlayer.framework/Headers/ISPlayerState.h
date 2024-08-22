// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISPLAYERSTATE_H
#define ISPLAYERSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ISPlayerState : NSObject

@property (readonly, nonatomic) NSString *diagnosticLabel; // ivar: _diagnosticLabel
@property (readonly, nonatomic) CGFloat photoBlurRadius; // ivar: _photoBlurRadius
@property (readonly, nonatomic) CGFloat videoAlpha; // ivar: _videoAlpha
@property (readonly, nonatomic) CGFloat videoBlurRadius; // ivar: _videoBlurRadius


+(id)outputInfoWithPhotoBlurRadius:(CGFloat)arg0 videoAlpha:(CGFloat)arg1 videoBlurRadius:(CGFloat)arg2 label:(id)arg3 ;
-(id)description;
-(id)initWithPhotoBlurRadius:(CGFloat)arg0 videoAlpha:(CGFloat)arg1 videoBlurRadius:(CGFloat)arg2 label:(id)arg3 ;


@end


#endif