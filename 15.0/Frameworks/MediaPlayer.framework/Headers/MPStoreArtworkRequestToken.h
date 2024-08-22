// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREARTWORKREQUESTTOKEN_H
#define MPSTOREARTWORKREQUESTTOKEN_H

@class NSURL, NSString, ICStoreArtworkInfo, ICStoreVideoArtworkInfo;
@protocol NSSecureCoding, MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality>



@property (nonatomic) NSInteger artworkInfoType; // ivar: _artworkInfoType
@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *cropStyle; // ivar: _cropStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) ICStoreArtworkInfo *imageArtworkInfo; // ivar: _imageArtworkInfo
@property (copy, nonatomic) NSString *sourceEditorialArtworkKind; // ivar: _sourceEditorialArtworkKind
@property (readonly) Class superclass;
@property (copy, nonatomic) ICStoreVideoArtworkInfo *videoArtworkInfo; // ivar: _videoArtworkInfo


+(BOOL)supportsSecureCoding;
+(id)tokenWithImageArtworkInfo:(id)arg0 ;
+(id)tokenWithVideoArtworkInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif