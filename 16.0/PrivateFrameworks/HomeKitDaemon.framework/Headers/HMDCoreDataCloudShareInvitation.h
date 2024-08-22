// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOREDATACLOUDSHAREINVITATION_H
#define HMDCOREDATACLOUDSHAREINVITATION_H

@class NSDictionary, CKDeviceToDeviceShareInvitationToken, NSURL;

#import <Foundation/Foundation.h>


@interface HMDCoreDataCloudShareInvitation : NSObject

@property (readonly, copy) NSDictionary *content;
@property (readonly) CKDeviceToDeviceShareInvitationToken *token; // ivar: _token
@property (readonly) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 token:(id)arg1 ;


@end


#endif