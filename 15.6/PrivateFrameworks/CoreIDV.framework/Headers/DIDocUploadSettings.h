// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIDOCUPLOADSETTINGS_H
#define DIDOCUPLOADSETTINGS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIDocUploadSettings : NSObject <NSSecureCoding>



@property (nonatomic) BOOL base64EncodingEnabled; // ivar: _base64EncodingEnabled
@property (copy, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (copy, nonatomic) NSString *recipient; // ivar: _recipient


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCertificateChain:(id)arg0 recipient:(id)arg1 encryptionVersion:(id)arg2 ;
-(id)initWithCertificateChain:(id)arg0 recipient:(id)arg1 encryptionVersion:(id)arg2 base64EncodingEnabled:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif