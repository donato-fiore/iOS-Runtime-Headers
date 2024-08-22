// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPROCESSSCOPEDMETADATA_H
#define CKPROCESSSCOPEDMETADATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKFrameworkFingerprint.h"

@interface CKProcessScopedMetadata : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int clientSDKVersion; // ivar: _clientSDKVersion
@property (retain, nonatomic) CKFrameworkFingerprint *frameworkFingerprint; // ivar: _frameworkFingerprint
@property (nonatomic) BOOL isClientMainBundleAppleExecutable; // ivar: _isClientMainBundleAppleExecutable


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif