// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAKEYINVITATIONREQUESTCONFIG_H
#define DAKEYINVITATIONREQUESTCONFIG_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAKeyInvitationRequestConfig : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *ownerIdsIdentifier; // ivar: _ownerIdsIdentifier
@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharingSessionIdentifier:(id)arg0 ownerIdsIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif