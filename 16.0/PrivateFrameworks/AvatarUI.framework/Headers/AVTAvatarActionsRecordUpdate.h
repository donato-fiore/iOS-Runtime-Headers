// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARACTIONSRECORDUPDATE_H
#define AVTAVATARACTIONSRECORDUPDATE_H

@protocol AVTAvatarRecord;

#import <Foundation/Foundation.h>


@interface AVTAvatarActionsRecordUpdate : NSObject

@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) BOOL fromLeft; // ivar: _fromLeft


+(id)recordUpdateForDeletingRecord:(id)arg0 withDataSource:(id)arg1 ;
-(id)initWithAvatarRecord:(id)arg0 fromLeft:(BOOL)arg1 ;


@end


#endif