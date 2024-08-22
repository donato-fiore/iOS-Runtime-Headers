// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSETREUPLOADEXPECTEDPROPERTIES_H
#define CKASSETREUPLOADEXPECTEDPROPERTIES_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *assetKey; // ivar: _assetKey
@property (readonly, copy, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (readonly, copy, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileSignature:(id)arg0 referenceSignature:(id)arg1 assetKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif