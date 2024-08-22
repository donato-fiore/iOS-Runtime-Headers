// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCAMERAADJUSTMENTS_H
#define PFCAMERAADJUSTMENTS_H

@class NSString, AVApplePortraitMetadata;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger cinematicVideoRenderingVersion; // ivar: _cinematicVideoRenderingVersion
@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic, getter=isDepthEnabled) BOOL depthEnabled; // ivar: _depthEnabled
@property (readonly, copy, nonatomic) NSString *effectFilterName; // ivar: _effectFilterName
@property (readonly, nonatomic) BOOL hasCrop;
@property (readonly, copy, nonatomic) NSString *portraitEffectFilterName; // ivar: _portraitEffectFilterName
@property (readonly, nonatomic) AVApplePortraitMetadata *portraitMetadata; // ivar: _portraitMetadata


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAdjustments:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffectFilter:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif