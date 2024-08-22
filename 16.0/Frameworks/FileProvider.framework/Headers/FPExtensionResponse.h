// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPEXTENSIONRESPONSE_H
#define FPEXTENSIONRESPONSE_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSFileProviderDomainVersion.h"

@interface FPExtensionResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *callDescription; // ivar: _callDescription
@property (retain, nonatomic) NSDictionary *domainUserInfo; // ivar: _domainUserInfo
@property (retain, nonatomic) NSFileProviderDomainVersion *domainVersion; // ivar: _domainVersion
@property (nonatomic) int extensionPid; // ivar: _extensionPid
@property (nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif