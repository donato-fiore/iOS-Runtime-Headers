// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECUREBACKUPBEGINPASSCODEREQUESTRESULTS_H
#define SECUREBACKUPBEGINPASSCODEREQUESTRESULTS_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding>



@property (readonly) NSData *cert; // ivar: _cert
@property (readonly) NSString *dsid; // ivar: _dsid
@property (readonly) NSString *escrowFederation; // ivar: _escrowFederation
@property (readonly) NSString *iCloudEnvironment; // ivar: _iCloudEnvironment
@property (readonly) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoredCertificate:(id)arg0 uuid:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif