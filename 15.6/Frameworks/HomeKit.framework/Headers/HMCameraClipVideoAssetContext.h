// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERACLIPVIDEOASSETCONTEXT_H
#define HMCAMERACLIPVIDEOASSETCONTEXT_H

@class NSData;
@protocol NSCopying, NSSecureCoding;


#import "HMCameraClipAssetContext.h"

@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <NSCopying, NSSecureCoding>



@property (readonly, copy) NSData *hlsPlaylist; // ivar: _hlsPlaylist


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 expirationDate:(id)arg1 requiredHTTPHeaders:(id)arg2 ;
-(id)initWithURL:(id)arg0 expirationDate:(id)arg1 requiredHTTPHeaders:(id)arg2 hlsPlaylist:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif