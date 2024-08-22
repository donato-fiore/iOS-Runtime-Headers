// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCLOUDKITTRANSPORTLOG_H
#define IDSCLOUDKITTRANSPORTLOG_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSCKDatabase.h"

@interface IDSCloudKitTransportLog : NSObject

@property (readonly, nonatomic) IDSCKDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)_messageFromRecord:(id)arg0 ;
-(id)_recordIDsToFetch;
-(id)_transportRecordZoneID;
-(id)initWithDatabase:(id)arg0 queue:(id)arg1 ;
-(void)createZone:(id)arg0 ;
-(void)disabled_fetchChangesSinceToken:(id)arg0 completion:(id)arg1 ;
-(void)dropZone:(id)arg0 ;
-(void)fetchChangesSinceToken:(id)arg0 completion:(id)arg1 ;


@end


#endif