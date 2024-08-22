// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARACTIONSPROVIDER_H
#define AVTAVATARACTIONSPROVIDER_H

@class AVTAvatarRecord, UIAction;
@protocol AVTAvatarActionsModelDelegate;

#import <Foundation/Foundation.h>

#import "AVTAvatarRecordDataSource.h"

@interface AVTAvatarActionsProvider : NSObject

@property (readonly, nonatomic) BOOL allowCreate; // ivar: _allowCreate
@property (retain, nonatomic) AVTAvatarRecord *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) UIAction *createAction; // ivar: _createAction
@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<AVTAvatarActionsModelDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIAction *deleteAction; // ivar: _deleteAction
@property (retain, nonatomic) UIAction *duplicateAction; // ivar: _duplicateAction
@property (retain, nonatomic) UIAction *editAction; // ivar: _editAction


+(NSUInteger)maximumNumberOfActions;
+(id)localizedTitleForActionType:(NSInteger)arg0 ;
-(BOOL)canPerformActionType:(NSInteger)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 dataSource:(id)arg1 allowCreate:(BOOL)arg2 ;
-(void)didTapCreateNew;
-(void)didTapDelete:(id)arg0 ;
-(void)didTapDuplicate;
-(void)didTapEdit;
-(void)generateActions;


@end


#endif