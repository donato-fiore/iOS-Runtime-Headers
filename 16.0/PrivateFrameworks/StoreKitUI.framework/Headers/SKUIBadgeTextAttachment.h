// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBADGETEXTATTACHMENT_H
#define SKUIBADGETEXTATTACHMENT_H

@class NSTextAttachment, NSURL;
@protocol NSCopying, OS_dispatch_semaphore;



@interface SKUIBadgeTextAttachment : NSTextAttachment <NSCopying>



@property (readonly, nonatomic) CGSize badgeSize;
@property (retain) NSObject<OS_dispatch_semaphore> *imageLoadingSemaphore; // ivar: _imageLoadingSemaphore
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewElement:(id)arg0 ;
-(void)_ensureImageIsLoaded;
-(void)_loadImageWithResourceName:(id)arg0 fallbackImage:(id)arg1 styleColor:(id)arg2 ;


@end


#endif