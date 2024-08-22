// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMBACKUPMANAGER_H
#define MDMBACKUPMANAGER_H

@class MBManager, NSString;
@protocol MBManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMBackupManager : NSObject <MBManagerDelegate>



@property (retain, nonatomic) MBManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithPersonaIdentifier:(id)arg0 ;
-(void)isCloudBackupInProgressWithCompletion:(id)arg0 ;


@end


#endif