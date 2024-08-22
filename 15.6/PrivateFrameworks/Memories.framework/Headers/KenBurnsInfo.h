// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KENBURNSINFO_H
#define KENBURNSINFO_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface KenBurnsInfo : NSObject <NSCoding, NSCopying>



@property (nonatomic) BOOL allowEffect; // ivar: _allowEffect
@property (nonatomic) BOOL effectDisabled; // ivar: _effectDisabled
@property (nonatomic) CGRect endFrame; // ivar: _endFrame
@property (nonatomic) float outputAspectRatio; // ivar: _outputAspectRatio
@property (nonatomic) CGSize playbackImageSize; // ivar: _playbackImageSize
@property (nonatomic) CGRect startFrame; // ivar: _startFrame


+(id)defaultKBInfo;
+(id)objectFromPlist:(id)arg0 ;
-(BOOL)updateKBInfoForNewPlaybackSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)endRectReferece;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)playbackSizeReferece;
-(id)plistRepresentation;
-(id)startRectReferece;
-(struct CATransform3D )endTransformToViewSize:(struct CGSize )arg0 ;
-(struct CATransform3D )startTransformToViewSize:(struct CGSize )arg0 ;
-(struct CATransform3D )transformForRect:(struct CGRect )arg0 toViewSize:(struct CGSize )arg1 ;
-(struct CGRect )adjustRect:(struct CGRect )arg0 forRenderingIntent:(int)arg1 currentImageSize:(struct CGSize )arg2 ;
-(struct CGRect )endFrameForRenderingIntent:(int)arg0 currentImageSize:(struct CGSize )arg1 ;
-(struct CGRect )startFrameForRenderingIntent:(int)arg0 currentImageSize:(struct CGSize )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif