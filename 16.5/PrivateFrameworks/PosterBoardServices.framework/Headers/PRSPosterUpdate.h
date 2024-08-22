// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATE_H
#define PRSPOSTERUPDATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSPosterUpdatePayload.h"

@interface PRSPosterUpdate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PRSPosterUpdatePayload *payload; // ivar: _payload
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)posterUpdateComplications:(id)arg0 ;
+(id)posterUpdateHomeScreenAppearance:(NSUInteger)arg0 ;
+(id)posterUpdateHomeScreenColor:(id)arg0 ;
+(id)posterUpdateHomeScreenGradient:(id)arg0 ;
+(id)posterUpdateHomeScreenPosterLegibilityBlurWithValue:(BOOL)arg0 ;
+(id)posterUpdateHomeScreenPosterProvider:(id)arg0 sessionInfo:(id)arg1 ;
+(id)posterUpdateHomeScreenPosterWithImageAtURL:(id)arg0 ;
+(id)posterUpdateInlineComplication:(id)arg0 ;
+(id)posterUpdateLegibilityBlurWithValue:(BOOL)arg0 ;
+(id)posterUpdateLockScreenPosterWithImageAtURL:(id)arg0 ;
+(id)posterUpdateMirroredHomeScreenLegibilityBlurWithValue:(BOOL)arg0 ;
+(id)posterUpdatePosterWithSessionInfo:(id)arg0 ;
+(id)posterUpdatesForDecoratedSessionInfo:(id)arg0 ;
+(id)posterUpdatesForWFWallpaperConfiguration:(id)arg0 ;
+(id)posterUpdatesForWFWallpaperConfiguration:(id)arg0 sessionInfo:(id)arg1 ;
-(id)_initWithUpdateType:(NSUInteger)arg0 payload:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif