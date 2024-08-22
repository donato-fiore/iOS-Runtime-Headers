// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDERREQUEST_H
#define NSFILEPROVIDERREQUEST_H

@class NSUUID, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSFileProviderDomainVersion.h"

@interface NSFileProviderRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSFileProviderDomainVersion *domainVersion; // ivar: _domainVersion
@property (readonly, nonatomic) BOOL isFileViewerRequest;
@property (readonly, nonatomic) BOOL isSystemRequest;
@property (retain, nonatomic) NSUUID *requestingApplicationIdentifier; // ivar: _requestingApplicationIdentifier
@property (copy, nonatomic) NSURL *requestingExecutable; // ivar: _requestingExecutable


+(BOOL)supportsSecureCoding;
+(id)_dsIdentifier;
+(id)_finderIdentifier;
+(id)_fpdIdentifier;
+(id)requestFromTheSystem;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif