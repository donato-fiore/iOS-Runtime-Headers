// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKASSETCOPYINFO_H
#define CKASSETCOPYINFO_H

@class NSData, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAssetCopyInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *assetKey; // ivar: _assetKey
@property (copy, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (copy, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (copy, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (copy, nonatomic) NSString *senderID; // ivar: _senderID


+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif