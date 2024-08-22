// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCNRDEVICESYNCSERVICE_H
#define VCNRDEVICESYNCSERVICE_H

@class NSString, NSURL;
@protocol NSCopying, VCShortcutSyncService;

#import <Foundation/Foundation.h>

#import "VCCompanionSyncService.h"

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion
@property (readonly, weak, nonatomic) VCCompanionSyncService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *syncServiceIdentifier; // ivar: _syncServiceIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCompanionSyncService:(id)arg0 device:(id)arg1 ;
-(void)requestFullResync;
-(void)requestSync;


@end


#endif