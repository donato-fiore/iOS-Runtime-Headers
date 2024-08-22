// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDOCUPLOADSETTINGS_H
#define DIDOCUPLOADSETTINGS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIDocUploadSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL base64EncodingEnabled; // ivar: _base64EncodingEnabled
@property (readonly, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (readonly, nonatomic) NSInteger container; // ivar: _container
@property (readonly, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (readonly, nonatomic) NSString *recipient; // ivar: _recipient


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCertificateChain:(id)arg0 container:(NSInteger)arg1 recipient:(id)arg2 encryptionVersion:(id)arg3 ;
-(id)initWithCertificateChain:(id)arg0 container:(NSInteger)arg1 recipient:(id)arg2 encryptionVersion:(id)arg3 base64EncodingEnabled:(BOOL)arg4 ;
-(id)initWithCertificateChain:(id)arg0 recipient:(id)arg1 encryptionVersion:(id)arg2 ;
-(id)initWithCertificateChain:(id)arg0 recipient:(id)arg1 encryptionVersion:(id)arg2 base64EncodingEnabled:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainer:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif