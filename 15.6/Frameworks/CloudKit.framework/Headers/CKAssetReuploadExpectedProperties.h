// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASSETREUPLOADEXPECTEDPROPERTIES_H
#define CKASSETREUPLOADEXPECTEDPROPERTIES_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *assetKey; // ivar: _assetKey
@property (copy, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (copy, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif