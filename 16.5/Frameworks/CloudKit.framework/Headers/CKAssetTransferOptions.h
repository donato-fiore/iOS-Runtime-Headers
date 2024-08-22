// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSETTRANSFEROPTIONS_H
#define CKASSETTRANSFEROPTIONS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSNumber *shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (copy) NSNumber *shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory
@property (copy) NSNumber *sparseAware; // ivar: _sparseAware
@property (copy) NSNumber *useMMCSEncryptionV2; // ivar: _useMMCSEncryptionV2


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif