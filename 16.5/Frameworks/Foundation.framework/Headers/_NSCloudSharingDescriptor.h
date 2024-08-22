// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSCLOUDSHARINGDESCRIPTOR_H
#define _NSCLOUDSHARINGDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>



@property BOOL invitationsSentViaThirdPartyService; // ivar: _invitationsSentViaThirdPartyService
@property NSInteger numberOfInvitations; // ivar: _numberOfInvitations
@property NSInteger operation; // ivar: _operation
@property BOOL publicShare; // ivar: _publicShare
@property (copy) NSString *sharedContentType; // ivar: _sharedContentType


+(BOOL)supportsSecureCoding;
-(id)_variantSubstrings;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif