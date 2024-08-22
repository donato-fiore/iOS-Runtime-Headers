// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCDOCUMENTCAMERAVIEWSERVICESESSIONREQUEST_H
#define DCDOCUMENTCAMERAVIEWSERVICESESSIONREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DCSandboxExtension.h"

@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) DCSandboxExtension *cachesDirectorySandboxExtension; // ivar: _cachesDirectorySandboxExtension


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif