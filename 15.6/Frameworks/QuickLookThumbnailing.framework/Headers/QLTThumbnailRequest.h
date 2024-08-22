// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTTHUMBNAILREQUEST_H
#define QLTTHUMBNAILREQUEST_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "QLCacheVersionedFileIdentifier.h"

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly) QLCacheVersionedFileIdentifier *fileIdentifier; // ivar: _fileIdentifier
@property int flavor; // ivar: _flavor
@property (readonly, nonatomic) BOOL forceGeneration;
@property NSInteger generationBehavior; // ivar: _generationBehavior
@property (readonly) BOOL iconMode; // ivar: _iconMode
@property (readonly) float maximumPixelSize;
@property (nonatomic) CGFloat minimumDimension; // ivar: _minimumDimension
@property (readonly, nonatomic) BOOL provideCachedResultsOnly;
@property (readonly, nonatomic) BOOL provideFullResolutionThumbnail;
@property (readonly, nonatomic) BOOL provideGenericIcon;
@property (readonly, nonatomic) BOOL provideLowQualityThumbnail;
@property (readonly, nonatomic) NSInteger requestedMostRepresentativeType;
@property (nonatomic) NSUInteger requestedTypes; // ivar: _requestedTypes
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL shouldProvideFoldedGenericIcon; // ivar: _shouldProvideFoldedGenericIcon
@property (nonatomic) CGSize size; // ivar: _size
@property (retain) NSUUID *uuid; // ivar: _uuid
@property BOOL wantsBaseline; // ivar: _wantsBaseline


+(BOOL)supportsSecureCoding;
+(id)thumbnailRequestForFileAtURL:(id)arg0 size:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 iconMode:(BOOL)arg4 ;
+(id)thumbnailRequestForFileAtURL:(id)arg0 size:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 iconMode:(BOOL)arg4 error:(*id)arg5 ;
+(id)thumbnailRequestForFileAtURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 iconMode:(BOOL)arg3 ;
+(id)thumbnailRequestForFileAtURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 iconMode:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)computeContentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersionedFileIdentifier:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 iconMode:(BOOL)arg3 flavor:(int)arg4 wantsBaseline:(BOOL)arg5 minimumDimension:(CGFloat)arg6 requestedTypes:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif