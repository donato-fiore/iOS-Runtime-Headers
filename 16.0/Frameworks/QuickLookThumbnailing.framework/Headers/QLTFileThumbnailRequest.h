// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTFILETHUMBNAILREQUEST_H
#define QLTFILETHUMBNAILREQUEST_H

@class FPSandboxingURLWrapper, FPItem;


#import "QLTThumbnailRequest.h"
#import "QLCacheBasicVersionedFileIdentifier.h"

@interface QLTFileThumbnailRequest : QLTThumbnailRequest

@property (readonly, nonatomic) QLCacheBasicVersionedFileIdentifier *fileIdentifier;
@property (readonly, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper; // ivar: _genericSandboxWrapper
@property (retain) FPItem *item; // ivar: _item
@property (readonly, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper; // ivar: _quicklookSandboxWrapper


+(BOOL)supportsSecureCoding;
-(BOOL)shouldProvideFoldedGenericIcon;
-(id)computeContentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileAtURL:(id)arg0 size:(struct CGSize )arg1 minimumDimension:(CGFloat)arg2 scale:(CGFloat)arg3 iconMode:(BOOL)arg4 error:(*id)arg5 ;
-(id)initWithFileAtURL:(id)arg0 size:(struct CGSize )arg1 minimumDimension:(CGFloat)arg2 scale:(CGFloat)arg3 iconMode:(BOOL)arg4 error:(*id)arg5 shouldMakeSandboxWrapper:(BOOL)arg6 ;
-(id)initWithFileAtURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 iconMode:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif