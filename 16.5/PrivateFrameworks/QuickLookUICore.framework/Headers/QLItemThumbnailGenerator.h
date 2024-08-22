// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLITEMTHUMBNAILGENERATOR_H
#define QLITEMTHUMBNAILGENERATOR_H

@class NSString;
@protocol QLItemThumbnailGeneratorProtocol;

#import <Foundation/Foundation.h>


@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fetcherClassesForPreviewItem:(id)arg0 ;
-(void)_generateThumbnailForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_generateThumbnailWithData:(id)arg0 contentType:(id)arg1 size:(struct CGSize )arg2 minimumDimension:(CGFloat)arg3 scale:(CGFloat)arg4 badgeType:(NSUInteger)arg5 completionHandler:(id)arg6 ;
-(void)_generateThumbnailWithFPItem:(id)arg0 size:(struct CGSize )arg1 minimumDimension:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)_generateThumbnailWithURL:(id)arg0 size:(struct CGSize )arg1 minimumDimension:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)generateThumbnailForItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 completionBlock:(id)arg5 ;
-(void)generateThumbnailRepresentationForItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 completionBlock:(id)arg5 ;
-(void)generateThumbnailRepresentationForItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 completionBlock:(id)arg4 ;


@end


#endif