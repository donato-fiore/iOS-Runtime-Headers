// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MREXTERNALDEVICETRANSPORT_H
#define MREXTERNALDEVICETRANSPORT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>

#import "MRDeviceInfo.h"

@interface MRExternalDeviceTransport : NSObject

@property (readonly, nonatomic) NSInteger connectionType; // ivar: _connectionType
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger port;
@property (readonly, nonatomic) BOOL requiresCustomPairing; // ivar: _requiresCustomPairing
@property (nonatomic) BOOL shouldUseSystemAuthenticationPrompt;
@property (readonly, nonatomic) NSString *uid; // ivar: _uid


-(id)createConnectionWithUserInfo:(id)arg0 ;
-(void)reset;


@end


#endif