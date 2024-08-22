// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTREMOTEGLOBALSETTINGSCHANGESET_H
#define BLTREMOTEGLOBALSETTINGSCHANGESET_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BLTPBSetRemoteGlobalSettingsRequest.h"

@interface BLTRemoteGlobalSettingsChangeset : NSObject

@property (readonly, nonatomic) BLTPBSetRemoteGlobalSettingsRequest *blt_protobuf;
@property (nonatomic) NSInteger globalScheduledDeliverySetting; // ivar: _globalScheduledDeliverySetting
@property (readonly, nonatomic) BOOL needsSend;
@property (readonly, nonatomic) NSString *remoteInfoDirectoryLocation;
@property (readonly, nonatomic) NSString *remoteInfoFileLocation;


+(id)remoteGlobalSettingsChangesetWithProvider:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sendSuccess;
-(id)description;
-(id)initWithProvider:(id)arg0 ;


@end


#endif