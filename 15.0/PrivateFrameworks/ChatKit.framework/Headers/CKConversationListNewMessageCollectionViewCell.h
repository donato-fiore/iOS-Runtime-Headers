// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTNEWMESSAGECOLLECTIONVIEWCELL_H
#define CKCONVERSATIONLISTNEWMESSAGECOLLECTIONVIEWCELL_H

@class NSString;
@protocol CKConversationListCellDelegate, CKConversationListCollectionViewCellDelegate;


#import "CKConversationListEmbeddedCollectionViewCell.h"

@interface CKConversationListNewMessageCollectionViewCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)embeddedTableViewCellClass;
+(id)reuseIdentifier;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(id)embeddedNewMessageTableViewCell;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didHoverOverCell:(id)arg0 ;
-(void)selectedDeleteButtonForConversation:(id)arg0 inCell:(id)arg1 ;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateFontSize;


@end


#endif