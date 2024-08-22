// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTUBIQUITOUSFILETHUMBNAILREQUEST_H
#define QLTUBIQUITOUSFILETHUMBNAILREQUEST_H

@class FPItem;


#import "QLTThumbnailRequest.h"
#import "QLCacheFileProviderVersionedFileIdentifier.h"

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest

@property (readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier;
@property (readonly) FPItem *item; // ivar: _item


+(BOOL)supportsSecureCoding;
-(BOOL)shouldProvideFoldedGenericIcon;
-(id)computeContentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFPItem:(id)arg0 size:(struct CGSize )arg1 minimumDimension:(CGFloat)arg2 scale:(CGFloat)arg3 iconMode:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif