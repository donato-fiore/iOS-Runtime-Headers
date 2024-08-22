// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALLOGMASTER_H
#define CALLOGMASTER_H

@class NSArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CalLogNode.h"

@interface CalLogMaster : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (nonatomic) BOOL autoFlush; // ivar: _autoFlush
@property (nonatomic) BOOL hasValidNotificationRegistrationToken; // ivar: _hasValidNotificationRegistrationToken
@property (nonatomic) int notificationRegistrationToken; // ivar: _notificationRegistrationToken
@property (retain, nonatomic) CalLogNode *oslogNode; // ivar: _oslogNode
@property (retain, nonatomic) CalLogNode *rootConfigurationNode; // ivar: _rootConfigurationNode
@property (retain, nonatomic) CalLogNode *standardOutNode; // ivar: _standardOutNode
@property (retain, nonatomic) NSArray *topLevelNodes; // ivar: _topLevelNodes
@property (retain, nonatomic) CalLogNode *userNotificationNode; // ivar: _userNotificationNode


+(id)sharedLogMaster;
-(BOOL)flush;
-(BOOL)shouldProcessNamespace:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findPermittedList;
-(id)init;
-(int)findMinimumLevel;
-(void)configureOSLogNode;
-(void)configureRootConfigurationNode;
-(void)configureStandardOutNode;
-(void)dealloc;
-(void)loadPreferredConfiguration;
-(void)processEnvelope:(id)arg0 ;
-(void)registerForConfigUpdateNotifications;
-(void)reloadTopLevelNodes;


@end


#endif