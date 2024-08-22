// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSILENTENROLLMENTCONTEXT_H
#define SSSILENTENROLLMENTCONTEXT_H

@class NSString, NSNumber, NSData;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSSilentEnrollmentContext : NSObject <SSXPCCoding>



@property (copy, nonatomic) NSString *URLString; // ivar: _URLString
@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headerADSID; // ivar: _headerADSID
@property (copy, nonatomic) NSString *headerGSToken; // ivar: _headerGSToken
@property (copy, nonatomic) NSString *headerGuid; // ivar: _headerGuid
@property (copy, nonatomic) NSString *headerMMeClientInfo; // ivar: _headerMMeClientInfo
@property (copy, nonatomic) NSString *headerMMeDeviceId; // ivar: _headerMMeDeviceId
@property (copy, nonatomic) NSData *parameters; // ivar: _parameters
@property (readonly) Class superclass;




@end


#endif