// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRESOURCEIDENTITY_H
#define CPLRESOURCEIDENTITY_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *fileUTI; // ivar: _fileUTI
@property (copy, nonatomic) NSString *fingerPrint; // ivar: _fingerPrint
@property (nonatomic) CGSize imageDimensions; // ivar: _imageDimensions


+(BOOL)isValidMMCSV2Signature:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(Class)_identityImplementationClass;
+(Class)resourceIdentityImplementation;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)extensionForFileUTI:(id)arg0 ;
+(id)fileUTIForExtension:(id)arg0 ;
+(id)fingerPrintForData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)fingerPrintForFD:(int)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)fingerPrintForFileAtURL:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)identityForStorageName:(id)arg0 ;
+(id)identityFromStoredIdentity:(id)arg0 ;
+(id)storageNameForFingerPrint:(id)arg0 fileUTI:(id)arg1 bucket:(*id)arg2 ;
+(void)setResourceIdentityImplementation:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identityForStorage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif