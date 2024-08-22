// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERTASK_H
#define AVTSTICKERTASK_H

@class NSString, NSIndexPath;

#import <Foundation/Foundation.h>


@interface AVTStickerTask : NSObject

@property (readonly, nonatomic) NSString *avatarRecordIdentifier; // ivar: _avatarRecordIdentifier
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) NSUInteger stickerType; // ivar: _stickerType
@property (readonly, nonatomic) id *task; // ivar: _task


// +(id)stickerTaskForSchedulerTask:(id)arg0 avatarRecordIdentifier:(unk)arg1 indexPath:(id)arg2 stickerType:(id)arg3  ;
-(id)description;
// -(id)initWithTask:(id)arg0 avatarRecordIdentifier:(unk)arg1 indexPath:(id)arg2 stickerType:(id)arg3  ;


@end


#endif