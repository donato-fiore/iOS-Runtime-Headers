// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREVIDEOARTWORKINFO_H
#define ICSTOREVIDEOARTWORKINFO_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICStoreVideoArtworkInfo : NSObject <NSSecureCoding>

 {
    NSDictionary *_aspectRatioToCRABSVideoDictionaries;
    NSDictionary *_aspectRatioToHLSVideoURL;
    NSDictionary *_aspectRatioToPreviewFrameArtworkInfo;
}


@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, copy, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CRABSVideoURLMatchingSize:(struct CGSize )arg0 ;
-(id)HLSVideoURLForAspectRatio:(CGFloat)arg0 ;
-(id)_aspectRatioKeyForAspectRatio:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoArtworkResponseDictionary:(id)arg0 ;
-(id)previewFrameArtworkInfoMatchingAspectRatio:(CGFloat)arg0 ;
-(id)supportedSizesForCRABSVideoForAspectRatio:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif