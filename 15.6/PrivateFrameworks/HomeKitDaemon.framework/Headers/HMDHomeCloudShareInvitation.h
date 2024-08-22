// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMECLOUDSHAREINVITATION_H
#define HMDHOMECLOUDSHAREINVITATION_H

@class NSDictionary, CKDeviceToDeviceShareInvitationToken, NSURL;

#import <Foundation/Foundation.h>


@interface HMDHomeCloudShareInvitation : NSObject

@property (readonly, copy) NSDictionary *content;
@property (readonly) CKDeviceToDeviceShareInvitationToken *token; // ivar: _token
@property (readonly) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 token:(id)arg1 ;


@end


#endif