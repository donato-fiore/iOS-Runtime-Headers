// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIMAGESET_H
#define PKIMAGESET_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKImageSet : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *originCacheURL; // ivar: _originCacheURL
@property (nonatomic) NSInteger version; // ivar: _version


+(BOOL)shouldCache;
+(BOOL)shouldCacheForDisplayProfile:(id)arg0 imageSetType:(NSInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(Class)classForDisplayProfile:(id)arg0 imageSetType:(NSInteger)arg1 ;
+(Class)classForImageSetType:(NSInteger)arg0 ;
+(NSInteger)imageSetType;
+(id)_archiveImageSetIfAppropriate:(id)arg0 screenScale:(CGFloat)arg1 screenSize:(struct CGSize )arg2 archiveURL:(id)arg3 cacheURL:(id)arg4 ;
+(id)_archiveURL:(id)arg0 ;
+(id)_createXPCContainerForImageSetWithType:(NSInteger)arg0 displayProfile:(id)arg1 screenScale:(CGFloat)arg2 screenSize:(struct CGSize )arg3 suffix:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6 imageSetOut:(*id)arg7 ;
+(id)archiveName;
+(id)cachedXPCContainerForImageSetWithType:(NSInteger)arg0 displayProfile:(id)arg1 displayTraits:(id)arg2 cacheURL:(id)arg3 ;
+(id)createXPCContainerForImageSet:(id)arg0 screenScale:(CGFloat)arg1 screenSize:(struct CGSize )arg2 cacheURL:(id)arg3 ;
+(id)createXPCContainerForImageSetWithType:(NSInteger)arg0 displayProfile:(id)arg1 screenScale:(CGFloat)arg2 screenSize:(struct CGSize )arg3 suffix:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6 ;
+(id)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 fileURL:(id)arg4 ;
+(unsigned int)currentVersion;
-(BOOL)_isSetImage:(id)arg0 equalToImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatImages;


@end


#endif