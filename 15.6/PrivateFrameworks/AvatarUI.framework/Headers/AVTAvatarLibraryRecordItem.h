// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARLIBRARYRECORDITEM_H
#define AVTAVATARLIBRARYRECORDITEM_H

@class NSString;
@protocol AVTAvatarLibraryItem, AVTAvatarRecord;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTAvatarLibraryRecordItem : NSObject <AVTAvatarLibraryItem>



@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cellIdentifier;
-(id)initWithAvatarRecord:(id)arg0 environment:(id)arg1 ;
-(void)configureCell:(id)arg0 imageProvider:(id)arg1 ;


@end


#endif