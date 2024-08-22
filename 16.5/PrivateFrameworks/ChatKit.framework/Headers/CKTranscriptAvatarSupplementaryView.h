// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTAVATARSUPPLEMENTARYVIEW_H
#define CKTRANSCRIPTAVATARSUPPLEMENTARYVIEW_H



#import "CKTranscriptCollectionSupplementaryView.h"
#import "CKAvatarView.h"

@interface CKTranscriptAvatarSupplementaryView : CKTranscriptCollectionSupplementaryView

@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView


+(id)supplementaryViewKindPrefix;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)dealloc;


@end


#endif